#include<iostream>
using namespace std;
class Base{
    int a,b;
    public:
    Base(){
        a=4;
        b=7;
    }
    void display(){
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
    friend void swap(Base &obj);
};
void swap(Base &obj){
    int t=obj.a;
    obj.a=obj.b;
    obj.b=t;
}
int main(){
    Base obj;
    obj.display();
    cout<<"AFTER SWAPING"<<endl;
    swap(obj);
    obj.display();
    return 0;
}