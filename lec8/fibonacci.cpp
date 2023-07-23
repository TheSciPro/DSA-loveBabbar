#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0, b = 1, val;
    int i = 2; // Start from i=2 since we already have the first two numbers 0 and 1.
    while (i <= n)
    {
        val = a + b;
        a = b;
        b = val;
        i += 1;
    }
    return val;
}

int main()
{
    int n = 5;
    int val = fib(n);
    cout << val;
    return 0;
}
