#include <iostream>
using namespace std;

int main()
{
double tal;
char fortsatta;
double summa = 0;

do {
cout << "Mata in ett tal: ";
cin >> tal;
summa = summa + tal;
cout << "Summan är: " << summa << endl;
cout << "Vill du fortsätta (J/N) " << endl;
cin >> fortsatta;
} while (fortsatta == 'J' || fortsatta == 'j');

cout << "Summan är: " << summa << endl;
cout << "Programmet är avslutat, tack för att du använder summaberäknaren!";

return 0;
}
