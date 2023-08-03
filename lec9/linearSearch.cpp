#include<iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
    
}


int main()
{
    //enter the size of array
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array elements"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //enter the key
    int key;
    cout<<"enter the elements you wish to search"<<endl;
    cin>>key;
    int found;
    found = search(arr, n, key);
    if(found)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
    
}
