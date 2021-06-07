#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
        ///cout << accounts[0][0] << endl;
        vector<int> result;
        int sum,i,j;
        for(i=0;i<accounts.size();i++)
        {
            sum =0;
            for(j=0;j<accounts[i].size();j++)
            {
                sum += accounts[i][j];
            }
            result.push_back(sum);
        }
        
        sort(result.begin(),result.end());
        //cout << result[0] << result[result.size()-1];
        
        return result[result.size()-1];
    }

    int main()
    {

    }