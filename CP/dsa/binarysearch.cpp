// only for even input
#include<iostream>
using namespace std;

int Binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start +(end-start)/2;

    while (start<=end)
    {
        /* code */
        if (arr[mid] == key)
        {
            /* code */
            return mid;
        }
        
        if (arr[mid]<key)
        {
            /* code */
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int input(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
}

int main(){

    int a,b;
    cout<<"Enter: "<<endl;
    cin>>a;
    cin>>b;
    int arr[a];
    int brr[b];
    cout<<"Input"<<endl;
    int d = input(arr , a);
    int e = input(brr, b);
    cout<<"sort"<<endl;
    int k;
    cout<<"Enter key"<<endl;
    cin>>k;
    int even = Binarysearch(arr, a, k);
    cout<<even<<endl;
}
