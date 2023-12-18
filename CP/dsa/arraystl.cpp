#include<iostream>
#include<array>
using namespace std;

int main(){
    int a[3] = {1,2,3};

    array<int, 4> b = {1,2,3,4};
    int size = b.size();

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<b[i]<<endl;
    }
    cout<<"element at 2nd index : "<<b.at(2)<<endl;

    cout<<"Empty?"<<b.empty()<<endl;

    cout<<"1st element: "<<b.front()<<endl;

    cout<<"last"<<b.back()<<endl;
}