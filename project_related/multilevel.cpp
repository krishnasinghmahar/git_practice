#include<iostream>
using namespace std;
class A // Base Class A
{
public:
void display(){cout<<"let's"<<endl;}
};
class B : public A // inherited from class A
{
public:
void show(){cout<<"DO"<<endl;}
};
class C : public B // inherited from class B
{
public:
void print(){cout<<"IT"<<endl;}
};
int main()
{
C obj; // object OF child class C
obj.display(); // Method ofclass A
obj.show(); // Method of class B
obj.print(); //Method of  class C
return 0;
}
