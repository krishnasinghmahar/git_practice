#include<iostream>
using namespace std;
class Myclass
{
public:
void display(); // method declaration
};
void Myclass :: display() // method defination
{
cout<<"Namaste!!"<<endl;
}
int main()
{
Myclass obj;
obj.display(); // method calling
return 0;
}