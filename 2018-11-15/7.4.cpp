#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Skriv din ålder:" << endl;
	cin >> age;
	
	if (age >= 65 || age <= 15)
	{
	cout << "Resan kostar då 5 kr\n";
}
	else
	{
		cout << "Då kostar resan 10 kr\n";
	}
	
	return 0;
}

