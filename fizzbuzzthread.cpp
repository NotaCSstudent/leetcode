///Not my code
//Credit to Rahulsreeram


#include <iostream>
using namespace std;
#include <thread>
#include <mutex>
#include <atomic>
#include <condition_variable>
#include <functional>

enum class printType
{
    NUM,
    FIZZ,
    BUZZ,
    FIZZBUZZ
};

class FizzBuzz
{
  private:
    int n;
    std::mutex m;
    std::condition_variable c;
    printType p{printType::NUM};
    int count{1};

    void _CheckNext()
    {
        ++count;
        if (count > n)
        {
            return;
        }
        else if (!(count % 15))
        {
            p = printType::FIZZBUZZ;
        }
        else if (!(count % 5))
        {
            p = printType::BUZZ;
        }
        else if (!(count % 3))
        {
            p = printType::FIZZ;
        }
        else
        {
            p = printType::NUM;
        }

        c.notify_all();
    }

  public:
    FizzBuzz(int n)
    {
        this->n = n;
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz)
    {
        while (1)
        {
            std::unique_lock<std::mutex> l(m);
            c.wait(l, [this]() { return ((p == printType::FIZZ) || (count > n)); });
            if (count > n)
            {
                c.notify_all();
                return;
            }
            printFizz();
            _CheckNext();
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz)
    {
        while (1)
        {
            std::unique_lock<std::mutex> l(m);
            c.wait(l, [this]() { return ((p == printType::BUZZ) || (count > n)); });
            if (count > n)
            {
                c.notify_all();
                return;
            }

            printBuzz();
            _CheckNext();
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
    void fizzbuzz(function<void()> printFizzBuzz)
    {
        while (1)
        {
            std::unique_lock<std::mutex> l(m);
            c.wait(l, [this]() { return ((p == printType::FIZZBUZZ) || (count > n)); });
            if (count > n)
            {
                c.notify_all();
                return;
            }

            printFizzBuzz();
            _CheckNext();
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber)
    {
        while (1)
        {
            std::unique_lock<std::mutex> l(m);
            c.wait(l, [this]() { return ((p == printType::NUM) || (count > n)); });
            if (count > n)
            {
                c.notify_all();
                return;
            }

            printNumber(count);
            _CheckNext();
        }
    }
};

int main()
{
    
}
