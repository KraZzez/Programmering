#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Ett klockslag: ";
	string tid;
	cin >> tid;
	string tim = tid.substr(0,2);
	string min = tid.substr(3,2);
	cout << "Timme " << tim;
	cout << " Minut " << min;
	
	
	return 0;
}
