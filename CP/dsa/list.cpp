#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int>l;

    list<int> n(l);
    list<int>g(5,100);

    l.push_back(1);
    l.push_front(2);

    for (int i:l) //i belong to l
    {
        cout<<i<<" "<<endl;
    }
        l.erase(l.begin());
        cout<<"after erase"<<endl;
        for (int i:l)
        {
            cout<<i<<" ";
        }

        cout<<"Size: "<<l.size()<<endl;             
        
    
    
}