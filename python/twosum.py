def  TwoSum(arr,target):
    result = []
    for i in range(len(arr)-1):
        for j in range(i+1,len(arr)):
            if arr[i] + arr[j] == target:
                result.append(j)
                result.append(i)
    return result
 