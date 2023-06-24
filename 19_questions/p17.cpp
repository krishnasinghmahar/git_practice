// C++ Program to Demonstrate
// Operator Overloading
#include <iostream>
using namespace std;

class A {
private:
	int a, b;

public:
	A(int r = 0, int i = 0)
	{
		a = r;
		b = i;
	}

	// This is automatically called when '+' is used with
	// between two Complex objects
	A operator+(A const& obj)
	{
		A res;
		res.a = a + obj.b;
		res.b = a + obj.b;
		return res;
	}
	void print() { cout << a << " + i" << b << '\n'; }
};

int main()
{
	A c1(10, 5), c2(2, 4);
	A c3 = c1 + c2;
	c3.print();
	return 0;
}

