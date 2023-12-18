// doubel ended que deq  

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(1); //for pushing in fron
    d.push_front(2); //for pushig in back

    // for (int i: d)
    // {
    //     /* code */
    //     cout<<i<<" "<<endl;
    // }
    // d.pop_front(); // for remob=ving from front

    // cout<<endl;
    // for (int i: d)
    // {
    //     /* code */
    //     cout<<i<<" "<<endl;
    // }

    cout<<endl;
    cout<<"print 1st index: "<<d.at(1)<<endl;

    cout<<"front "<<d.empty()<<endl;
    cout<<"back "<<d.size()<<endl;

    cout<<"Empty or not"<<d.empty()<<endl;

    cout<<"before erase"<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;


}