#include <iostream>
#include <string>
using namespace std;
int main()
{
	// datatyp namn ex int i;
	// class namn
	// ex
	string s, s1;
	// Tilldelning
	s = "Hej Zannah!";
	s1 = " xxx";
	// Slå ihop strängar
	string str = s+s1;
	cout << str << endl;
	int position = s.find ('Z',0);
	cout << position << endl;
	
	return 0;
}
