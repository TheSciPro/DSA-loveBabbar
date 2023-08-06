#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}


int main()
{
    int n;
    cout<<"enter the odd size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the unique element in the given array is"<<endl;
    int x=unique(arr, n);
    cout<<x;
}
