#include<iostream>
using namespace std;
class Base{
    int a,b;
    public:
    // WHAT IS CONSTRUCTOR OVERLOADING?
    // CONSTRUCTOR overloading or fun() overloading means having more than one fun() with same name but having:-
    // i)  Different no. of arguments
    // ii) Different types of arguments
    //     -> so in constructor overloading also we are having different constructors having same name but
    //       types of arguments are different.
    Base(){ //default constructor Baby
        a=2; b=3;
    }
    Base(int x,int y){  //parametrized constructor
        a=x;  b=y;
    }
    Base(Base &obj){    //copy constructor
        a=obj.a;
        b=obj.b;
    }
    void display(){ cout<<"a= "<<a<<" b= "<<b<<endl; }
};
int main(){
    Base obj;
    obj.display();
    Base obj2(3,4);
    obj2.display();
    Base obj3(obj2);
    obj3.display();
}