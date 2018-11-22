#include <iostream>

using namespace std;

int main()
{
	int storst, minst, steg;
	
	cout << "Största talet: "; cin >> storst;
	cout << "Minsta talet: "; cin >> minst;
	cout << "Steg längd: "; cin >> steg;
	

	while ( storst >= minst ) 
	{
		cout << storst << ' ';
		storst = storst - steg;
	} 
	
	return 0;
}
