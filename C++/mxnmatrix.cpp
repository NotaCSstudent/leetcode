 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool result = false;
        int i = 0;
        int j = 0;
        while(i<matrix.size())
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(target == matrix[i][j])
                {
                    result = true;
                   
                }
            }
        i++;
        }
        return result;
        
    }
