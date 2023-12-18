//  https://bit.ly/3y01Zdu

#include<iostream>
using namespace std;

int main(){
    int run;
    cin>>run;
    while (run>0)
    {
        /* code */
    
    
    int a;
    cin>>a;
    int arr[a];
    int check =0;
    int bonk;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < a; i++)
    {
        /* code */
        for (int j = 0; j < a; j++)
        {
            /* code */
            if (arr[i] == arr[j])
            {
                check = 1;
            }
            else
            {
                bonk = arr[i];
            }
        }
        
    }
    cout<<bonk<<endl;
    run--;
    }   
}