#include <iostream>
#include <math.h>
using namespace std;
/*
Övningsuppgift 3
Skriv ett program som beräknar alla tresiffriga positiva heltal (d.v.s. heltal mellan 100 och 999), där summan av kuberna på de tre siffrorna i talet är lika med talet självt (t ex 371 = 3^3 + 7^3 + 1^3). Ledtråd: Du kan behöva lägga till ett bibliotek
*/
int main(int argc, char** argv)
{
	
	for (int x=0; x<10; x++)
	{
		
		
			for (int y=0; y<10; y++)
			{
				
						for (int z=0; z<10; z++)
						{
							
							
							
							if ( (x*100+y*10+z) == (pow(x,3)+pow(y,3)+pow(z,3)) )
									cout << x << y  << z << " == "<< x <<"^3 + " << y <<"^3 + " << z <<"^3" << endl;		
							
						}

			}
		
	}
	
	
	return 0;
}
