#include <iostream>
using namespace std;
void meny();
void celsius();
void fahrenheit();
int main()
{
	meny();	
return 0;
}
void meny() {
	cout << "MENY" << endl;
	cout << "Omvandla från Celsius till Fahrennheit (f)" << endl;
	cout << "Omvandla från Fahrenheit till Celsius (c)" << endl;
	cout << "Avsluta (a)" << endl;	
	char val;
	cin >> val;
	if (val=='f') {
		fahrenheit();
	}
	else if (val=='c') {
		celsius();
	}
	else if (val=='a') {
		cout << "Programmet avslutas";
	}
}
void celsius() {
	cout << "Skriv in hur många grader celsius: " << endl;
	double celsiustal;
	cin >> celsiustal;
	celsiustal=celsiustal*1.8+32;
	cout << celsiustal << endl << endl;
	meny();
}
void fahrenheit() {
	cout << "Skriv in hur många grader fahrenheit: " << endl;
	double fahrenheittal;
	cin >> fahrenheittal;
	fahrenheittal=(fahrenheittal-32)/1.8;
	cout << fahrenheittal << endl << endl;
	meny();
}
