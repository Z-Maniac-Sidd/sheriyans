#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (arr[i] == key)
        {
            /* code */
            return 1;
        }
        
    }
    return 0;
}



int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,-5};

    cout<<"Enter key"<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);

    if (found)
    {
        /* code */
        cout<<"key is present"<<endl;
    }
    else
    {
        cout<<"Not present"<<endl;
    }
} 