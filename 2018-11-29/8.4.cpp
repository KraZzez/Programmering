#include <iostream>
using namespace std;

int main ()
{
	setlocale( LC_ALL, "" );
	
	int hastighet[8];
	
	for ( int n = 0 ; n < 8 ; n=n+1 )
	{
		hastighet[n] = 5 * ( n + 1 );
		cout << hastighet[n] << " " << hastighet[n]*3.6 << endl;
	}
	
	return 0;
}
