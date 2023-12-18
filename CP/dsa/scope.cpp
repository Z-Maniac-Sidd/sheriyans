#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"INside fn"<<endl;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout<< arr[i] <<" ";
    }cout<< endl;
    cout<<"back to main"<<endl;
}


int main(){
    int arr[3] = {1,2,3};

    update(arr, 3);

    for(int i = 0; i < 3; i++)
    {
        /* code */
        cout<< arr[i]<<" ";
    }
    cout<< endl;
    return 0;   
}