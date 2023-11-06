#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
        
    }
};
void levelorderTraversalQueue(Node* root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    

}

void leftBoundaryTraversal(Node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    cout<<root->val<<" ";
     if(root->left==NULL)  leftBoundaryTraversal(root->right); 
    leftBoundaryTraversal(root->left);
   

}
void bottomBoundaryTraversal(Node* root){
      if(root==NULL)return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundaryTraversal(root->left);
    bottomBoundaryTraversal(root->right);
    
    

}
void rightBoundaryTraversal(Node* root){
     if(root==NULL)return;
    if(root->right==NULL && root->left==NULL)return;
     if(root->right==NULL)  leftBoundaryTraversal(root->left); 
    leftBoundaryTraversal(root->right);
    cout<<root->val<<" ";
   

}
int main()
{
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    levelorderTraversalQueue(a);
    cout<<endl;
    leftBoundaryTraversal(a);
    cout<<endl;
    bottomBoundaryTraversal(a);
    cout<<endl;
    rightBoundaryTraversal(a);



 
 
 
    return 0;
}