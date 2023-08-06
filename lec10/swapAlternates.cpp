#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{
   for(int i=0;i<n;i+=2)
   {
        if(i+1<n)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
   }
}

void printArray(int arr[], int n)
{
   for(int i=0;i<n;i++) 
   {
       cout<<arr[i]<<" ";
   }
}

int main()
{
    int n;
    cin>>n; // size of array
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"entered array is"<<endl;
    printArray(arr, n);
    cout<<"reverse"<<endl;
    reverse(arr, n);
    printArray(arr, n);
}
