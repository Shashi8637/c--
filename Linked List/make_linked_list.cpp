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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
        cout<<endl;
    }
     void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
        cout<<endl;
    }
    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};
 
int main()
{
    LinkedList ll;
    // ll.insertAtEnd(10);
    // ll. display();
    // ll.insertAtEnd(20);
    ll.display();
    ll.insertAtHead(22);
    ll.insertAtHead(20);
    ll.insertAtHead(22);
    ll.insertAtHead(23);
    ll.insertAtHead(21);
    ll.insertAtHead(24);
    ll.display();
    

 
 
 
    return 0;
}