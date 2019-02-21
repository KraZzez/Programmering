/*#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int min;
	int tim;
	int minuter;
    cout << "Mata in antalet minuter: " << endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	cin >> min;
	minuter = min;
	tim = minuter/60;
	minuter = min%60;
	cout << min << " minuter motsvaras av " << tim << " timmar och " << minuter << " minuter" << endl;
	
	return 0;
} 
*/

// Ludvig Krantzén, uppgift 2



#include <iostream>
using namespace std;

int main()
{
	int tal;
	int tal1 = 0;
	cout << "Gissa ett tal mellan 0 och 100: ";
	cin >> tal;
	tal1 = tal1 +1;
	
	do {
		
	if (tal == 69)
	{
		cout << "Grattis du gissade rätt på försök nr " << tal1 << endl;
	}
	
	if (tal > 69)
	{
		cout << "Fel! För stort. Gissa igen: ";		
	}
	
	if (tal < 69)
	{
		cout << "Fel! För litet. Gissa igen: ";	
	}	
	
} while (tal != 69); 


	
	
	
	
	return 0;
}


//* Ludvig Krantzén, uppgift 3.

/*
#include <iostream>
using namespace std;

int main()
{
	int antal;
	int tal = 0;
	int tal2;
	
	cout << "Hur många heltal vill du mata in? (4 till 100)" << endl;
	cin >> antal;
	
	do {


tal = tal + 1;
cout << "Mata in tal " << tal << ": " << endl;
cin >> tal2;
} while (tal < antal);

cout << "Det största av de inmatade heltalen är ";



return 0;
}
*/
