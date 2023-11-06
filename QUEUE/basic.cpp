#include<bits/stdc++.h>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);


    }
}
 
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.back();
    cout<<endl;
    display(q);
    cout<<endl;
    q.pop();
    display(q);
    cout<<endl;
    q.pop();
    display(q);
    cout<<endl;
  
    // display(q);



 
 
 
    return 0;
}