#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};
int size(Node* head, int n){
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        n++;
       
    } 
    cout<<endl;
    return n;
}


void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }


}
 
int main()
{
    Node* a = new Node(16);
    Node* b = new Node(13);
    Node* c = new Node(20);
    Node* d = new Node(15);
    Node* e = new Node(9);
    Node* f = new Node(10);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    int n=0;

    print(a);
    size(a,n);
    cout<<size(a,n);
   
 
    return 0;
}