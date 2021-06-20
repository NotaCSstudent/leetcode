func lengthOfLongestSubstring(s string) int {
    asciiArr := [128]int{}

	left,right,maxLen := 0,0,0

	for right < len(s) {
		c := s[right]
		right++
		asciiArr[c]++

		for asciiArr[c] > 1 {
			d := s[left]
			left++
			asciiArr[d]--
		}
		if right - left > maxLen {
			maxLen = right - left
		}
	}

	return maxLen
}
