#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for (auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    set<int> ::iterator it = s.begin();
    it++;

        s.erase(it);

        for (auto i:s)
        {
            /* code */
            cout<<i<<endl;
        }
    cout<<endl;
    cout<<"5 is present"<<s.count(-5)<<endl;

    set<int> :: iterator itr = s.find(5);

    cout<<"value present at itr"<<*it<<endl;

    for (auto it = itr;it!=s.end();it++)
    {
        /* code */
        cout<<*it<<" ";
    }cout<<endl;
    
    set<int>::iterator itrf= s.find(5);
    cout<<"iterator lotao  "<<*it<<endl;

    for(auto it = itr; it!= s.end(); it++){
        cout<<*it<<" "<<endl;
    }cout<<endl;
}