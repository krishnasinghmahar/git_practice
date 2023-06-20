#include<iostream>
using namespace std;
class A // 1st Base class
{
public:
    void display()
    {
    cout<<"JAI HIND"<<endl;
    }
};
class B // 2nd Base class
{
public:
    void show(){cout<<"LET'S MAKE INDIA ATAMNIRBHAR AND DEVELOPED"<<endl;}
};
class C : public A,public B // class derived from class A & B
{
public:
void print(){cout<<"CHAK DE INDIA"<<endl;}
};
int main()
{
C obj; // object of child class
obj.display(); // accessing method from Base1 class
obj.show(); // accessing method from Base2 class
obj.print(); // accessing method from derived class
return 0;
}
