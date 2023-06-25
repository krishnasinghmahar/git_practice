//basic hash table implementation
//By Hashing we can find elements in O(1) Time Complexity.

#include<iostream>
using namespace std;
#define SIZE 1000
//2D array for storing positive and negative elements of arrays.
bool has[SIZE+1][2];

//function for searching respective element to thier to thier respective indexes
bool search(int num){
    if(num>=0){
        if(has[num][0]==1)
        return true;
        else
    return false;
    }
    else{
        num=abs(num);
        if(has[num][1]==1)
        return true;
        else
        false;
    }
    
    
}
//function for inserting array elements in the Hash Table 
//according to thier indexes.
void insert(int *ar,int size){
    for(int i=0;i<size;i++){
        if(ar[i]>=0){
            has[ar[i]][0]=1;
        }
        else
        has[abs(ar[i])][1]=1;
    }
}
int main(){
    int ar[]={2,4,6,-12,43,65,1,100,1000};
    int len=sizeof(ar)/sizeof(ar[0]);
    insert(ar,len);
    int num=0;
    cout<<"Enter the element to be found"<<endl;
    cin>>num;
    if(search(num))
    cout<<"ELement is pResent"<<endl;
    else
    cout<<"Element is not Present"<<endl;
    return 0;
}