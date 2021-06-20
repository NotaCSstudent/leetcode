use std::cmp;
fn process_string(s: &str) -> String {
    // Builds ^#1#2#3#S from 123 needed to build LPS
    // python's'#'.join('^{}$'.format(s))
    let mut b = String::with_capacity(s.len() * 2 + 3);
    b.push('^');
    for ch in s.chars() {
        b.push('#');
        b.push(ch);
    }
    b.push('#');
    b.push('$');
    return b;
}
impl Solution {
    pub fn longest_palindrome(s: String) -> String {
        //This is Manacher's algorithm from https://github.com/sanz94/Manachers-algorithm-Python/blob/master/manachers_algorithm.py
        if s.len() < 2 {
            return s;
        }

        let processed_string: Vec<char> = process_string(&s).chars().collect();
        let length = processed_string.len();
        let mut lps = vec![0; length];
        let (mut center, mut right, mut max_lps_length, mut max_lps_position) = (0, 0, 0, 0);
        let mut i = 1;

        while i < length - 1 {
            // check if within previous range of previous largest palindrome
            if i < right {
                lps[i] = cmp::min(lps[2 * center - i], right - i);
            }
            // check if within range and if so, expand from current character to left and right and compare them
            while i + lps[i] + 1 < length
                && i - lps[i] - 1 > 0
                && processed_string[i + lps[i] + 1] == processed_string[i - lps[i] - 1]
            {
                lps[i] += 1;
            }

            if lps[i] > max_lps_length {
                max_lps_length = lps[i];
                max_lps_position = i;
            }

            if i + lps[i] > right {
                center = i;
                right = i + lps[i];
            }

            i += 1;
        }

        let start = (max_lps_position - max_lps_length) / 2;
        let end = start + max_lps_length - 1;
        return s[start..end + 1].chars().collect();
    }
}