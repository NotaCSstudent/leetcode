import "main"
import "sort"


func min(a, b int) int {
  if a < b {return a}
  return b
}

func findLongestChain(pairs [][]int) int {
  sort.SliceStable(pairs, func(i, j int) bool {
	return pairs[i][0] < pairs[j][0]
  })

  res := 1
  k := pairs[0][1]

  for _,pair := range(pairs) {
	if pair[0] > k {
	  k = pair[1]
	  res++
	} else {
	  k = min(k, pair[1])
	}
  }
  return res
}