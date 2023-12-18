#include<iostream>
using namespace std;
int input(int arr[], int a){
    for (int i = 0; i < a; i++)
    {
        /* code */
        cin>>arr[i];
    }
    // return arr[];
}

int reader(int arr[], int a){
    
}
int main(){
    int a,b, c, d;
    cin>>a>>b;
    int arr[a], brr[b];

    c = input(arr, a);
    d = input(brr, b);
    // for (int i = 0; i < a; i++)
    // {
    //     /* code */
    //     cin>>arr[i];
    // }
    
    // for (int i = 0; i < b; i++)
    // {
    //     /* code */
    //     cin>>brr[i];
    // }

    for (int i = 0; i < a; i++)
    {
        /* code */
        for (int j = 0; j < b; j++)
        {
            /* code */
            if (arr[i] == brr[j])
            {
                /* code */
                cout<<arr[i]<<" "<<endl;
                break;
            }
            
        }
        
    }
    
}