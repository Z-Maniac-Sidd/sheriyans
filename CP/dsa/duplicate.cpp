#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    int bonk;
    for (int i = 0; i < a; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    for (int i = 0; i < a; i++)
    {
        /* code */
        for (int j = 0; j<a; j++)
        {
            /* code */
            if (arr[i] == arr[j])
            {
                /* code */
                bonk = arr[i];
            }
            
        }
        
    }
    cout<<bonk;
}