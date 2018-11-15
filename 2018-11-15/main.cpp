#include <iostream>
using namespace std;
int main()
{ // Om AND och OR
	//&& (och)
	// || (eller)
	// ! (icke)
	if (((false) || (false)) && ((true) && (true)))
	{
		cout << "Det sammantagna uttrycket mellan det yttre paranteserna är sant" << endl;
		
	}    
	else
	{
			cout << "Det sammantagna uttrycket mellan det yttre paranteserna är INTE sant" << endl;
     }
     
     int a, b;
     cout << "Mata in två heltal :";
     cin >> a;
     cin >> b;
     
     if (((a>b) || (a<b)) && ((a<b) && (a<b)))
     cout << "SANT" << endl;
     
     else
     cout << "INTE SANT" << endl;
     
	
	return 0;
}
