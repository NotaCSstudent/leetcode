 int lengthOfLongestSubstring(string s) {
     
        set<char> result;
        int maximum =0;
        int first=0;
        int second=0;
        
        if(s.size()==0)
        {
            return 0;

        }
        
        while(second<s.length())
        {
            if(result.insert(s[second]).second)
            {
                second++;
                maximum = max(maximum,second-first);
            }
            else
            {
                result.erase(s[first]);
                first++;
            }
        }
        
        
        return maximum;
    }
