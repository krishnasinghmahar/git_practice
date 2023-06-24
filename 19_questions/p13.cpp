#include<iostream>
using namespace std;
int main()
{
int a=10;
cout<<"Post increment a= "<<a++<<endl;
cout<<"after post increment a= "<<a<<endl;
a=10;
cout<<"Post decrement a= "<<a--<<endl;
cout<<"after post decrement a= "<<a<<endl;

//pre decrement and increment
a=10;
cout<<endl;
cout<<"pre increment a= "<<++a<<endl;
cout<<"after pre increment a= "<<a<<endl;
a=10;
cout<<"pre decrement a= "<<--a<<endl;
cout<<"after pre decrement a= "<<a<<endl;
}
