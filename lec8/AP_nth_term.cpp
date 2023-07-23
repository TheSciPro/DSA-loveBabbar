#include<iostream>
using namespace std;
int nthTerm(int n)
{
    int m;
    m=7+(n*3);
    return m;
}
int main()
{
    int n;
    cin>>n;
    int val;
    val=nthTerm(n);
    cout<<"the nth term for "<<n<<" is "<<val;
}
