#include<iostream>
#include <typeinfo>
using namespace std;
class A{
    int a;
    public:
    A(){
        a=2;
    }
};
class BCAFGH:public A{
    int a;
    public:
    B(){
        a=2;
    }
};
int main(){
    A obj;
    A obj2;
    BCAFGH ob2;
    int s=2;

    cout<<typeid(ob2).name();
    return 0;
}