func generateParenthesis(n int) []string {
	var r []string
	if n <= 0 {
		return nil
	}

	if n == 1 {
		return []string{"()"}
	}
	if n == 2 {
		return []string{"(())", "()()"}
	}

	dp := make([]map[string]struct{}, n+1)
	dp[1] = map[string]struct{}{
		"()": struct{}{},
	}
	dp[2] = map[string]struct{}{
		"(())": struct{}{},
		"()()": struct{}{},
	}

	for i := 3; i <= n; i++ {
		dp[i] = make(map[string]struct{})
		for j := range dp[i-1] {
		
			l := len(j)
			for k := 0; k <= l; k++ {
				s := j[0:k] + "()" + j[k:l]
				dp[i][s] = struct{}{}

			}

		}
	}
	for j := range dp[n] {

		r = append(r, j)
	}
	return r
}

func main()
{
	
}