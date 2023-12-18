
#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    int b,i;
    for (int i = 0; i <a; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];

    for (int i = 0; i < a; i++)
    {
        /* code */
        if (arr[i]>max)
        {
            /* code */
            max = arr[i];
            b = i;
        }
        
    }
    cout<<"Pivot index is "<<b<<endl;
    cout<<"Pivot is "<<arr[b]<<endl;
}