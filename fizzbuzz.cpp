#include <iostream>
#include <vector>
using namespace std;

void Fizz_Buzz(int a)
{
    int i;
    for(i=0;i<a+1;i++)
    {
        if(i ==0 || i==1)
        {
                std::cout << i  << std::endl;
        }
        else if(i%3 ==0 and i%5==0)
        {
            std::cout << "Fizz Buzz" << std::endl;
        }
        else if(i%3 ==0)
        {
            std::cout << "Fizz" << std::endl;
        }
        else if(i%5 ==0)
        {
            std::cout << "Fizz" << std::endl;
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
}

int main()
{
    Fizz_Buzz(30);

}
