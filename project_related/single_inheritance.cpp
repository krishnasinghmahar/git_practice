#include<iostream>
using namespace std;
class A // Base class
{
public:
    void display()
    {
    cout<<"Hello"<<endl;
    }
};
class B : public A // derived from class A
{
public:
    void show()
    {
    cout<<"Namaste"<<endl;
    }
};
int main()
{
B obj; //object of child class
obj.display(); // access method from parent class
obj.show(); // access method from child class
return 0;
}
