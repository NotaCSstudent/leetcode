impl Solution {
    pub fn convert(s: String, num_rows: i32) -> String {
        let mut buffer: Vec<Vec<char>> = vec![];
        for i in 0..num_rows {
            buffer.push(vec![]);
        }
        
        let chars: Vec<char> = s.chars().collect();
        let mut column = 0usize;
        while column < s.len() {
            let mut row = 0usize;
            while row < num_rows as usize && column < s.len() {
                buffer[row].push(chars[column]);
                row += 1;
                column += 1;
            }
            
            row = (num_rows as usize).checked_sub(2).unwrap_or(0);
            while row >= 1 && column < s.len() {
                buffer[row].push(chars[column]);
                row -= 1;
                column += 1;
            }
        }
        
        let mut res = "".to_string();
        for i in 0..num_rows {
            res = res + &(&buffer[i as usize]).iter().collect::<String>();
        }
        res
    }
}