#include<iostream>
using namespace std;

int swapinarray(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int revvv(int arr[])
{
    int i = 0;
    int n = sizeof(arr);
    while (i<n)
    {
        /* code */
        swapinarray(arr, i, n);
        i++;
        n--;
    }
    
}

int main(){
    int n;
    cout<<"Enter size"<<endl;
    int arr[n];
    cout<<"Enter array"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    revvv(arr);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" "<<endl;
    }
    return 0;

}