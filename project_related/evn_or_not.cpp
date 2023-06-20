#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter number to check if it is even or not : ";
cin>>num;
if(num%2==0)
cout<<num<<" is Even"<<endl;
else
cout<<num<<" is not Even"<<endl;
return 0;
}