#include<iostream>
#include<typeinfo>
using namespace std;
struct node{
    int a;
};
class A{
    int a;
    public:
    int b;
    void display(){
        cout<<"hello baby"<<endl;
    }
};
int main(){
    A obj;
    A *obj_ptr=&obj;
    int b=2;
    int *ptr=&b;
    struct node var1;
    struct node *vr1=&var1;
    var1.a=2;
    cout<<vr1<<endl;
    cout<<&var1<<endl;
    cout<<var1<<endl;
    //cout<<*vr1<<endl;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<"using ptr object's adrs = "<<obj_ptr<<endl;
    cout<<"object's adrs = "<<&obj<<endl;
    //cout<<"calling member fun() through ptr= "<<(*obj_ptr);
    obj_ptr->display();
    return 0;
}