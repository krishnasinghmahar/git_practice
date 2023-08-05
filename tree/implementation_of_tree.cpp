#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
node* newtree(){
    int val;
    cin>>val;
    if(val==-1) return NULL;
    node*root=new node(val);
    root->left=newtree();
    root->right=newtree();
    return root;
}
void inorder(node*root){
    if(root!=NULL){
        cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}
int main(){
    node*root=newtree();
    inorder(root);
}