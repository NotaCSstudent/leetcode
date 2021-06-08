    string toLowerCase(string s) {
        int i =0;
       
        while(s[i])
        {
           
            s[i] = tolower(s[i]);
            i++;
        }
        return s;
    }
