#include<iostream>
using namespace std;

int firstocc(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }
        else if (key>arr[mid])
        {
            start = mid+1;
        }
        else if (key<arr[mid])
        {
            end = mid-1;
        }
        mid = start+(start-end)/2;
        
    }
    return ans;
}

int lastocc(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }
        else if (key>arr[mid])
        {
            start = mid+1;
        }
        else if (key<arr[mid])
        {
            end = mid-1;
        }
        mid = start+(start-end)/2;
        
    }
    return ans;
}


int main(){
    int a;
    cout<<"enter size of array: "<<endl;
    cin>>a;
    int arr[a];

    cout<<"Enter array"<<endl;
    for (int i = 0; i < a; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;

    int b = firstocc(arr, a, key);
    int c = lastocc(arr, a, key);

    cout<<"number of occurence is: "<<c-b+1<<endl;
}