#include<iostream>
using namespace std;
class Myclass{
    int a,b;
    public:
    Myclass(int a,int b){//helps to Resolve the ambiguity problem in data members. 
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
};
int main(){
    Myclass obj1(3,4);
    obj1.display();
}