#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    // vector<int> a(5,1);
    // a is nane, 5 is size, 1 is initial value

    // vector<int> last(a)
    // this function copies all contenyt of a into last

    cout<<"Size"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size"<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;

    cout<<"element at 2nd "<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i : v)
    {
        /* code */
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();

    cout<<"After pop"<<endl;



}