func twoSum(nums []int, target int) []int {
    
    // dictionary
    // key: number 
    // value: index
    num_idx_dict := make(map[int]int)
    
    // scan each (index, number) in input array nums
    for cur_idx, number := range nums{
        
        complement := target - number
        
        if idx_of_dual, dual_exist := num_idx_dict[ complement ]; dual_exist{
            
            // find two numbers with sum = target
            return []int{idx_of_dual, cur_idx}
            
        }else {
            
            // update current number with index into dictionary
            num_idx_dict[ number ] = cur_idx
        }
    }
    
    // Description guarantees that there is exactly one solution in online test, so this won't happen on run-time.
    return []int{-1, -1}
}
