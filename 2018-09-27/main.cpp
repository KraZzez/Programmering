#include <iostream>
using namespace std;
int main()
{
	//variabel med ett värde
	int x = 3;
	//variabel med många värden, fält
	//Åtkomst genom indexring
	double talfalt[4];
	talfalt [2] = 4;
	x = talfalt[2];
	cout << x << endl;
	// Här kan finnas vad som helst.
	// talfalt[0] har vi inte gett något värde.
	// cout << talfalt[0] << endl;
	int a [3];
	a[0]=0;
	a[0]=1;
	a[0]=2;
	// Du kan tilldela fältet värden
	// samtidigt som du deklarerar.
	int b[3] = {0,1,3};
	// Alternativt kan du skriva
	// (kompilatorn kan räkna)
	// b[] = {0,1,3};
	// Gör exempel 3.1, sidan 40
	
	int hf[4];
	cout << "Mata in ett heltal: ";
	cin >> hf[0];
	cout << "Mata in ett heltal: ";
	cin >> hf[1];
	cout << "Mata in ett heltal: ";
	cin >> hf[2];
	cout << "Mata in ett heltal: ";
	cin >> hf[3];
	cout << hf [0] << ' ' << hf[1] << ' ' << hf[2] << ' ' << hf[3] << endl;
	
	// Byta ut ett valfritt tal
	int val;
	cout << "Byt värde 1,2,3 eller 4: ";
	cin >> val;
	cout << "Det nya värdet: ";
	cin >> hf[val-1]; //Heltalet, indexvärdet kan vara en variabel.
	cout << hf [0] << ' ' << hf[1] << ' ' << hf[2] << ' ' << hf[3] << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
