#include <iostream>
using namespace std;

double tidsomvandling(double timmar);

int main()
{
	double timmar;
	cout << "Mata in timmar: ";
	cin >> timmar;
	double minuter = tidsomvandling(timmar);
	cout << timmar << " timmar är " << minuter << " minuter";
	return 0;
}

double tidsomvandling(double timmar)
{
	double min = (timmar * 60);
	return min;
}
