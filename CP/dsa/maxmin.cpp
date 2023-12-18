// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cin>> a;
//     int w[10000]={0};
//     cout<<"give input: "<<endl;
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         cin>>w[i];
//     }
    
//     int min = w[0];
//     int max = w[0];

//     for (int i = 0; i < 10000; i++)
//     {
//         /* code */
//         if (w[i]<min)
//         {
//             /* code */
//             min = w[i];
//         }
//         if (w[i]>max)
//         {
//             /* code */
//             max = w[i];
//         }
        
//     }
//     cout<<"Max is "<<max<<endl;
//     cout<<"min is "<< min<<endl;
// }



//***************************************************************************

#include<iostream>
using namespace std;

int getmax(int a[], int n){
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i]>max)
        {
            /* code */
            max = a[i];
        }
        
    }
    return max;
}
int getmin(int a[], int n){
    int min = 300000;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i]<min)
        {
            /* code */
            min = a[i];
        }
        
    }
    return min;
}
int main(){
    int size;
    cin>>size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>> num[i];
    }
    cout<<"Max is"<< getmax(num, size)<<endl;
    cout<<"Min is"<< getmin(num, size)<<endl;
}