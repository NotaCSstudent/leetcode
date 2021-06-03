    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int x=0;
        int y =0;
        int i;
        int target = nums[x];
        while(x<nums.size())
        {
            for(i=0;i<nums.size();i++)
            {
                if(nums[x] > nums[i])
                {
                    y+=1;
                }
                
            }
            result.push_back(y);
            y=0;
            x++;
            
            
        }
        
        
        
        return result;
    }
    
};
