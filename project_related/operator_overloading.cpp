#include<iostream>
using namespace std;
class Base{
    int a,b;
    public:
    Base(){
        a=1;
        b=1;
    }
    Base (int x,int y){
        a=x;
        b=y;
    }
    void operator -(){
        a=-a;
        b=-b;
    }
    void operator --(){
        a=-a;
        b=-b;
    }
    void operator +(){
        a=-(a);
        b=-b;
    }
    void operator ++(){
        a=++a;
        b=++b;
    }
    void display(){
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};
int main(){
    Base obj1(3,4);
    obj1.display();
    ++obj1;
    obj1.display();

}