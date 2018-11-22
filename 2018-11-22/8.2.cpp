#include <iostream>
using namespace std;

int main()
{
	for ( int n=0 ; n<4 ; n++ )
	{
		cout << n << " " << endl;
	}
	
	cout << "=============================" << endl;
	
	for ( int n=5 ; n>=0 ; n-- )
	{
		cout << n << " " << endl;
	}
	cout << "=============================" << endl;
	
	for ( int n=5 ; n<=30 ; n+=5 )
	{
		cout << n << " ";
	}
	return 0;
}
