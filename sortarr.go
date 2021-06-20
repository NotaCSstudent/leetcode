func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	k:= 0
	len1 := len(nums1)
	len2 := len(nums2)
	totalLen :=  len1 + len2
	result := make([]int,totalLen)
	i,j := 0,0
	//Merge two sorted arrays
	for  i< len1 && j < len2{
		if nums1[i] < nums2[j]{
			result[k] = nums1[i]
			k++
			i++
		}else{
			result[k] = nums2[j]
			k++
			j++
		}

	}
	if i == len1{
		//Copy remaining elems of num2 to result
		for ; k < totalLen; k++{
			result[k] = nums2[j]
			j++
		}

	}
	if j == len2{
		//Copy remaining elems of num1 to result
		for ; k < totalLen; k++{
			result[k] = nums1[i]
			i++
		}

	}
	var medianElement int
	medianElement = totalLen/2
	// Even number , average of two elements
	if totalLen % 2 == 0 {
		return float64((result[medianElement]+result[medianElement-1]))/2.0
	}else{
		//Odd number
		return float64(result[medianElement])
	}

}
