#include<iostream>
using namespace std;

int input(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
}

int output(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i];
    }
    
}

int main(){
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter array"<<endl;
    int a = input(array, size);
    int count = 0;
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (array[i] == key)
        {
            /* code */
            count++;
        }
        
    }
    cout<<"count = "<<count<<endl;
}