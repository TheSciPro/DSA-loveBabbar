#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"array "<<arr[i]<<endl;
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"max is "<<max<<" min is "<<min;
}
