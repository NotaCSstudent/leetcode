#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <functional>
#include <stack>
using namespace std;


bool ValidParen(string s)
{
    stack<char> result;///Our Stack
    int i =0;//Iterator
    char x; // our variable to track whats going on
    if(s.size() == 0) {return true;} //Since its empty it will be true
    if(s.size() == 1) {return false;}//One implies there is no pair since a pair must be 2 so the size must be greater than 1
    for(i=0; i<s.size();i++)
    {
        x = s[i];
        if(x == '}' or x == ')'  or x == ']')
        {
            if(result.size()==0){return false;}
            else if(x=='}' and result.top() != '{'){return false;}//Check for elements messing up the pairs
            else if(x==']' and result.top() != '['){return false;}
            else if(x==')' and result.top() != '('){return false;}
            result.pop();
        }
        else
        {
            result.push(x); //adds unique elements into the pairs
        }
    }
    if(result.size()==0){return true;}//if the stack becomes empty, that means we have full pairs
    return false;      
}

int main()
{
    
    cout << ValidParen("{}[]()") << endl;
   //cout << ValidParen("{){}") << endl;
    

}