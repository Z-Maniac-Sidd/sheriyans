#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"size"<<endl;
    cin>>n;
    int arr[n];
    int minIndex;
    cout<<"Enter array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"working"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for(int i = 0; i<n;i++)
        {
            int minIndex = i;
            for(int j = i+1;j<n;j++)
                {
                    if(arr[j]<arr[minIndex])
                        minIndex = j;
                }
            swap(arr[minIndex], arr[i]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}