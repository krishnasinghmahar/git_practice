#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
void insertInBST(node*root,int&val){
    if(val>root->data&&root->right==NULL)
    root->right=new node(val);
    else if(val>root->data&&root->right!=NULL)
    insertInBST(root->right,val);
    if(val<root->data&&root->left==NULL)
    root->left=new node(val);
    else if(val<root->data&&root->left!=NULL)
    insertInBST(root->left,val);
}
void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    node*root=NULL;
    int k=10;
    while(k){
        int val;
        
        cout<<"enter the element\t"<<endl;
        cin>>val;
        if(root==NULL)
        root=new node(val);
        else{
            insertInBST(root,val);
        }
        k--;
    }
    cout<<"INORDER TRAVERSAL OF TREE TO CONFIRM BABY!!"<<endl;
    inorder(root);
}