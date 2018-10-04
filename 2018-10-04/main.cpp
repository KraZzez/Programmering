#include <iostream>
using namespace std;
int main()
{
	// Teckenfält kan hanteras som vilket fält som helst
	/*char cf[5];
	cf[0] = 'A';
	cf[1] = 'B';
	cf[2] = 'C';
	cf[3] = 'D';
	cf[4] = 'E';
	cf[5] = 'F'; */
	char cf[]={'S','N','Y','G','G','A','\0'};
	cout << cf[0] << cf[1] << cf[2] << cf[3] << cf[4] << cf[5] << endl;
	// Detta funkar med charfält
	char namn [] = "Kalle";
	// cout skriver ut på skärmen tills '\0' tecknet påträffas
	cout << "namn: " << namn << endl; //  '\' tecknet
	cout << "cf " << cf << endl;            //läggs till automatiskt
	                                  // inget '\0' tecken läggs till,
	                                  // utskriften oföursägbar
	
	
	
	
	return 0;
}
