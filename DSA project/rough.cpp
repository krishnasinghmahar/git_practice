#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int ar[]={1,4,2,3,6};
    int target=10;
    unordered_set<int>s;
    for(int i=0;i<5;i++)
    s.insert(ar[i]);
    for(int i=0;i<5;i++){
        int temp=ar[i];
        s.erase(ar[i]);
        if(s.find(target-ar[i])!=s.end()){
            cout<<target-ar[i]<<endl;
            break;
        }
        
        s.insert(temp);
    }
}