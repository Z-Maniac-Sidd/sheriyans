#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int>q;
//max heap whenevr element will be fetched it will be the greatest element
    priority_queue<int, vector<int>, greater<int>> r;

    q.push(1);
    q.push(3);
    q.push(2);
    q.push(0);

    cout<<"size "<<q.size()<<endl;

    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<q.top()<<" "<<endl;
        q.pop();
    }
    cout<<endl;
    
    r.push(5);
    r.push(1);
    r.push(0);
    r.push(4);
    r.push(3);
    
    int m = r.size();
    for (int i = 0; i < m; i++)
    {
        /* code */
        cout<<r.top()<<" "<<endl;
        r.pop();
    }
    cout<<endl;
    

}