#include<iostream>
using namespace std;
class Myclass{
    int a;
    public:
    Myclass(int x){a=x;}
    void show(){
        cout<<"value of a= "<<a<<endl;
    }
};
class Derived_class:public Myclass{
    int b,c;
    public:
    Derived_class(int x,int y,int z):Myclass(x){
        b=y;
        c=z;
    }
    void display(){
        cout<<"value of b & c is "<<b<<" "<<c<<endl;
    }
};
int main(){
    Derived_class obj1(1,23,4);
    obj1.display();
    obj1.show();
    return 0;
}