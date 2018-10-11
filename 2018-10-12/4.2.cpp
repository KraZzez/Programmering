#include <iostream>
using namespace std;
int main()
{
	cout << "Skriv in antal månader" << endl;
	int tal;
	cin >> tal;
	cout << "Motsvarar " <<(tal/12) << " år och " << tal%12 << " månader" << endl;
	
	return 0;
}
