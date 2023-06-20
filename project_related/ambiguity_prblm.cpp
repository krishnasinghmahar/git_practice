#include<iostream>
using namespace std;
class A
{
public:
void display(){cout<<"JAI HIND"<<endl;}
};
class B
{
public:
void display(){cout<<"NAMASTE"<<endl;}
};
class C : public A,public B
{
public:
void print(){cout<<"HARE KRISHNA"<<endl;}
};
int main()
{
C obj;
//obj.display(); -> compiler will be confuse to call which base class display fun -> AMBIGUITY 
// WE USE :: (scope resolution operator to resolve this issue)
obj.A::display(); // access by obj_of_child_cls.Base_cls :: method _of_base_class
obj.B::display();
obj.print();
return 0;
}
