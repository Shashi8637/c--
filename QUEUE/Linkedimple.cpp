#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val =val;
        this->next = NULL;
    }
};

class Queue{
    public:
    Node* f;
    Node* b;
    int s;
     
     Queue(){
        f=b=NULL;
        s=0;



     }
     void push(int val){
        Node* temp = new Node(val);
        if(s==0) f = b = temp;
        else{
           b->next = temp;
           b = temp;
        }
       
        s++;

     }
     void pop(){
        if(s==0){
            cout<<"empty";
        }
        else{
            f = f->next;
        }
        s--;
     }
     void display(){
        Node* temp = f;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
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
    q.display();
    q.pop();
    q.display();
    q.pop();

 
 
 
    return 0;
}