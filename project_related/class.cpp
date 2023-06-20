#include<iostream>
using namespace std;
class Myclass //class declaration
{
public:
int num; //data member
    //Member function
    void display() 
    {
    cout<<"Value of data member a is "<<num<<endl;
    }
};
int main()
{
Myclass obj; // class object declaration
obj.num=24; //accessing data member
obj.display(); //accessing member fun through obj
return 0;
}