#include<iostream>
using namespace std;
int nthTerm(int n)
{
    int m,p;
    p=n-1;
    m=7+(p*3);
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
