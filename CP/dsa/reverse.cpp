#include<iostream>
using namespace std;

int reverse(int a[], int b){
    int start = 0;
    int end = b-1;

    while (start<=end)
    {
        /* code */
        swap(a[start], a[end]);
        start++;
        end--;
    }
    
}
int printArray(int a[], int b){
    for (int i = 0; i < b; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {1,2,3,4,5};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}