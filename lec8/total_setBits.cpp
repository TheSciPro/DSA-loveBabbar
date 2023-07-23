#include<iostream>
using namespace std;
int setBits(int n)
{
    int count=0;
    while(n>0)
    {
        if((n&1)==1)
        {
            count=count+1;
        }
        n>>1;
    }
    return count;
}
int main()
{
    int n,r;
    cin>>n>>r;
   int val,val1,total;
   val=setBits(n);
   val1=setBits(r);
   total=val+val1;
   cout<<total;
}
