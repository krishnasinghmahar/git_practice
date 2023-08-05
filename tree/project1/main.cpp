#include<iostream>
#include<conio.h>
using namespace std;
#define gbspace 5
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
void print2d(node*root,int space){
    if(root==NULL) return;
    space=space+gbspace;
    print2d(root->right,space);
    cout<<endl;
    for(int i=gbspace;i<space;i++)
    cout<<" ";
    cout<<root->data;
    cout<<endl;
    print2d(root->left,space);
}
node* newtree(){
    int val;
    cout<<"enter node val:  ";
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
node*makeBST(){
    node*root=NULL;
    int k;
    cout<<"ENTER NO. OF NODES TO BE INSERTED : ";
    cin>>k;
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
    return root;

}
int main(){
    cout<<"\t\t<---------------------------WELCOME TO MAYA JUNGLE BABY!!-------------------------->\n"<<endl;
    cout<<"CHOOSE ANY option ?"<<endl;
    cout<<"1. Create a Normal TREE"<<endl<<"2. DISPLAY TREE"<<endl;
    cout<<"3. Create a BST TREE"<<endl<<"4. DISPLAY BST TREE"<<endl;
    cout<<"5. OR ANY KEY TO EXIT"<<endl;
    int choice;
    cin>>choice;
    node*root1;
    node*root2;
    while(choice>0&& choice<5){
        if(choice ==2||choice==4)
        cout<<"----------------------------------------------------DISPLAYING TREE---------------------------------------------------------"<<endl;
        if(choice==1)
        root1=newtree();
        else if(choice==2) print2d(root1,0);
        else if(choice==3) root2=makeBST();
        else if(choice==4) print2d(root2,0);
        if(choice ==2||choice==4)
        cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"ENTER CHOICE : ";
        cin>>choice;
    }
    cout<<"MEET U SOON BABES!!"<<endl;
    getch();
}