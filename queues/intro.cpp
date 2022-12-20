#include<bits/stdc++.h>
using namespace std;

int main(){
    //create a queuse
    queue<int> q;
    q.push(11);
    cout<<"front of q is "<<q.front()<<endl;
    q.push(23);
    cout<<"front of q is "<<q.front()<<endl;

    q.push(34);
    cout<<"front of q is "<<q.front()<<endl;

    cout<<"sizeof queues is"<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<"sizeof queues is"<<q.size()<<endl;
    if (q.empty())
    {
    cout<<"queuse is empty"<<endl;
    }
    else
    {
        cout<<"queuse is not empty"<<endl;
    }
        
return 0;
}