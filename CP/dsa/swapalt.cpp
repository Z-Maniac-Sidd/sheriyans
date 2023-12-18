#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    int start = 0;
    int end = 1;

    for (int i = 0; i<a; i+=2)
    {
        if (i+1<a)
        {
            swap(arr[start], arr[end]);
            start = start+2;
            end = end+2;
        }
    }
    for (int i = 0; i < a; i++)
    {
        /* code */
        cout<<arr[i]<<" "<<endl;
    }
    
}