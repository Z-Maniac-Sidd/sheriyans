#include<iostream>
using namespace std;

int main(){
    int a;
    cin>> a;
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        /* code */
        sum = sum+arr[i];
    }
    cout<<sum;
}