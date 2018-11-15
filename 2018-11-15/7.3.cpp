#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Ange din ålder:" << endl;
	cin >> age;
	if (age > 14 && age < 65)
	cout << "Resan kostar då 10 kr\n";
	
	else
	{
		cout << "Då kostar resan 5 kr\n";
	}
	
	return 0;
}
