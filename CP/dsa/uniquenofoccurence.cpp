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
    int count = 1;
    for (int i = 0; i < a; i++)
    {
        
        /* code */
        for (int j = 0; j < a; j++)
        {
            /* code */
            if (arr[i] == arr[j])
            {
                /* code */
                count++;
            }
            
        }
        
    }
    if (count>1)
    {
        /* code */
        cout<<"False"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}