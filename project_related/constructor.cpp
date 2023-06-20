#include<iostream>
using namespace std;
class Myclass
{
public:
int a,b;
    Myclass() //default constructor
    {
        a=1;    
        b=2;
        cout<<"Default constructor called"<<endl;
    }
    Myclass (int num1, int num2) //parameterized constructor
    {
    a=num1;
    b=num2;
    cout<<"\nParameterized constructor called"<<endl;
    }
    Myclass (Myclass &obj2) //copy constructor
    {
    a=obj2.a;
    b=obj2.b;
    cout<<"\nCopy constructor called"<<endl;
    }
    void display()
    {
    cout<<"a= "<<a<<endl;
    cout<<"b = "<<b<<endl;
    }
};
int main()
{
Myclass obj1; //default constructor called
Myclass obj2(20,40); //parameterized constructor called
obj2.display();
Myclass obj3(obj2); //copy constructor
obj3.display();
return 0;
}
