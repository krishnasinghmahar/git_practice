// CPP program to check if a given character
// is vowel or consonant.
#include <iostream>
using namespace std;

// Function to check whether a character is
// vowel or not
void vowelOrConsonant(char x)
{
	if (x == 'a' || x == 'e' || x == 'i' ||
				x == 'o' || x == 'u')
		cout << "Vowel" << endl;
	else
		cout << "Consonant" << endl;
}

// Driver code
int main()
{
	cout<<"c is ";
	vowelOrConsonant('c');
	cout<<"e is ";
	vowelOrConsonant('e');
	return 0;
}

