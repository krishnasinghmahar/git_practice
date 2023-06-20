#include<iostream>
using namespace std;
int main()
{
int num1,num2,num3,num4,num5;
cout<<"Enter three numbers to find greatest : "<<endl;
cin>>num1>>num2>>num3>>num4>>num5;
if(num1>num2 && num1>num3 && num1>num4 && num1>num5)
cout<<num1<<" is greatest"<<endl;
else if(num2>num3&&num2>num4&&num2>num5)
cout<<num2<<" is greatest"<<endl;
else if(num3>num4&&num3>num5)
cout<<num3<<" is greatest"<<endl;
else if(num4>num5)
cout<<num4<<" is greatest"<<endl;
else
cout<<num5<<" is greatest"<<endl;
return 0;
}
