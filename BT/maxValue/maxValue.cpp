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
void displayPreOrder(Node* root){
    if(root==NULL) return;
    displayPreOrder(root->left);
    cout<<root->val<<" ";
    displayPreOrder(root->right);

}
int MaxValue(Node *root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(MaxValue(root->left),MaxValue(root->right)));

}
int main()
{
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(2);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayPreOrder(a);
    cout<<endl;
    cout<<MaxValue(a);
    return 0;
}