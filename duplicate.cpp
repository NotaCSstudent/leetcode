    int findDuplicate(vector<int>& nums) {
        int x =0;
        int j =0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            j = i-1;
            if(nums[i]==nums[j])
            {
                x = nums[i];
            }
        }
        return x;
        
        
    }
};
