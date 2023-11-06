#include<bits/stdc++.h>
using namespace std;
class Node{  
    public:  //data type
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Stack{
   public:
   Node* head; // data structure
   int size;
   Stack(){
    head = NULL;
    size = 0;

   } 
   void pushStack(int val){
    Node* temp = new Node( val);
    temp->next = head;
    head = temp;
    size++;


   }

   void pop(){
    if(head==NULL) return;
    head = head->next;
    size--;

   }

   void top(){

   }
   void print(Node* a){
    Node* temp = a;
    if(temp==NULL) return;
    print(temp->next);
    cout<<temp->val<<" ";
   }
   
   void display(){
    Node* temp = head;
    print(temp);
    cout<<endl;

   }
};
 
int main()
{

  Stack ll;
  ll.pushStack(10);
  ll.pushStack(20);
  ll.pushStack(30);
  ll.pushStack(40);
  ll.pushStack(50);
  ll.pushStack(60);
  ll.pushStack(70);
  ll.display();
  ll.pop();
  ll.display();





 
 
 
    return 0;
}