int minSubArrayLen(int s, vector<int>& nums) {
        int Size_= nums.size();
        int left=0;
        int right=0;
        int total=0; 
        int minimum= Size_+1;
        while (right < Size_) {
            do { total += nums[right++]; } while (right<Size_ && total< s);
            while (left<right && total-nums[left]>=s) {total -= nums[left++]};
            if (total>=s && minimum> right- left) { minimum= right- left;}
        }
        return minimum<=Size_ ? minimum: 0;
    }
