#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int arr[5];
    int f;
    int b;

    Queue(){
        f=0;
        b=0;
    }
    void push(int val){
        if(b==5){
            cout<<"array is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout<<"array is empty "<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(f-b==0) return -1;
        else return arr[f];

    }
    int back(){
        if(f-b==0) return -1;
        else return arr[b-1];
    }
   void display(){
    for(int i=f; i<b; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    }


};
 
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    //q.push(60);
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;


 
 
 
    return 0;
}