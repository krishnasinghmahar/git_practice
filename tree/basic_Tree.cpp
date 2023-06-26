#include<iostream>
using namespace std;
struct Node{
    int val;
    Node*left;
    Node*right;
    Node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
void preorder(Node*head){
    if(head!=NULL){
        preorder(head->left);
        preorder(head->right);
        cout<<head->val<<" ";
    }
    else
    cout<<"NULL"<<" ";
}
int main(){
    /*
                           | 1 | -> root node
                         /      \
                         2       3
                      /    \   /   \
                     4     X  X    x
                   /    \
                  6      5
                 /   \  /   \
                X     X X    X          preorder Traversal: X X 6 X X 5 4 X 2 X X 3 1 

     */
     Node*root=new Node(1);
    Node*root_left=new Node(2);
    Node*root_right=new Node(3);

    root->left=root_left;
    root->right=root_right;

    Node*left_sub_tree=new Node(4);
    root_left->left=left_sub_tree;
    Node*sub_right=new Node(5);
    Node*sub_right2=new Node(6);
    left_sub_tree->right=sub_right;
    left_sub_tree->left=sub_right2;
    preorder(root);
    return 0;

}