/*
Write a program to print the area and perimeter of a triangle having base and height by creating a class named 'Triangle' with a function to print the area and perimeter.
*/
#include<iostream>
#include <cmath>
using namespace std;
class Triangle{
    public:
    int base;
    int height;
    Triangle(){
        base=1;
        height=1;
    }
    Triangle(int b,int h){
        base=b;
        height=h;
    }
    void perimeter(){
        int h=sqrt(pow(base,2)+pow(height,2));
        cout<<"Perimeter = "<<h+base+height<<endl;
    }
    void area(){
        cout<<"Area :"<<0.5*base*height<<endl;
    }
};
int main(){
    Triangle t1(10,6);
    t1.perimeter();
    t1.area();
    return 0;

}