#include<bits/stdc++.h>
using namespace std;


void display(queue<int>& q){
   int n = q.size();
   for(int i=0; i<n; i++){
    int x = q.front();
    cout<<q.front()<<" ";
    q.pop();
    q.push(x);

   }
   cout<<endl;
}

 
int main()
{
queue<int>q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
display(q);
q.pop();
display(q);
cout<<q.back()<<" ";
 
 
 
    return 0;
}