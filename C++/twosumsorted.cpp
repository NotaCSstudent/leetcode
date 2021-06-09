  vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end= numbers.size()-1;
        vector<int>result;
        int headstart;
        int sum = 0;
        while(start < end)
        {
           sum = numbers[start] + numbers[end];
            
            if(sum>target)
            {
                end--;
            }
            else if (sum<target)
            {
                start++;
            }
            else if(target == sum)
            {
                result.push_back(start+1);
                result.push_back(end+1);
                break;
            }
        }
        return result;
        
    }
