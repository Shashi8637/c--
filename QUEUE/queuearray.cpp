#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int arr[5];
    int f;
    int b;
    Queue(){
        f = 0;
        b = 0;
    }

    void push(int val){
        if(b-f==5){
            cout<<"overflow"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"empty! lowre ruk jaa kaha delete kr raha h"<<endl;
            return;
        }
        f++;
    }

    int size(){
        return b-f;

    }

    void display(){
        for(int i=f; i<b; i++){
            cout<<arr[i]<<" ";
        }
    }


};
 
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(50);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();
    q.pop();
    cout<<q.size();

 
 
 
    return 0;
}