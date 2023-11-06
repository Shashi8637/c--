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
void nthLevelOfNode(Node *root,int &level, int curr){
    if(root==NULL) return;
    if(curr==level) cout<<root->val<<" ";
    nthLevelOfNode(root->left,level,curr+1);
    nthLevelOfNode(root->right,level,curr+1);

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
    int level = 2;
    int curr = 0;
    displayPreOrder(a);
    cout<<endl;
    nthLevelOfNode(a,level,curr);
    return 0;
}