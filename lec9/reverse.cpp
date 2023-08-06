#include<iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start+=1;
        end-=1;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    reverse(arr, n);
    printArray(arr, n);
}
