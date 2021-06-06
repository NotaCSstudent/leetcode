#include <iostream>
#include <string>
#include <set>
using namespace std;

int helper(int n)
{
    int sum = 0;
    while(n)
    {
        int ones = n%10;
        sum += ones*ones;
        n/=10;
    }
    return sum;
}

bool isHappy(int n)
{
    set<int> myset;
    myset.insert(n);
    while(1)
    {
        if(n==1)
        {
            return true;
        }
        n = helper(n);
        if(myset.find(n)!=myset.end()){return false;}
        myset.insert(n);
    }
    return false;
}


int main()
{
    cout << isHappy(19);
}