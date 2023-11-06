#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
         this->next=NULL;

    }

};
class Linked{
    public:
    Node* head;
    Node* tail;
    int size;
    Linked(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
  void inserAttop(int val){

    Node* temp = new Node(val);
     if(size==0) head = tail = temp;
     else {
         temp->next = head;
         head = temp;
     }
  
    size++;


  }
  void insertAtEnd(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
       tail->next = temp;
       tail = temp;
    }
    
    size++;
  }

  void print(Node* head){
    Node* temp = head;
   
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
        
    }
  }

};
 
int main()
{
    Linked LL;
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    
    LL.inserAttop(-1);
    LL.inserAttop(-2);
    LL.inserAttop(-3);
    LL.inserAttop(-4);
    LL.insertAtEnd(60);
    LL.insertAtEnd(70);
    LL.insertAtEnd(80);

    LL.print(LL.head);

 
 
 
    return 0;
}