#include <iostream>
using namespace std;
void inTid(double tid[], int& n);
void utTid(double tid[], int n);
int main()
{
    double tid[5];
    int antal;
    inTid(tid, antal); 
	utTid(tid, antal); 
	
	return 0;
}
void inTid(double tid[], int& n)
{
	cout << "Skriv in tiderna. (Maximalt 5st) Avsluta med 0.\n";
	n = 0;
	cin >> tid[n];
	while (tid[n] != 0)
	{
		n++;
		cin >> tid[n];
	}
}
void utTid(double tid[], int n)
{
	cout << "Tiderna är: ";
	for (int i=0; i<n; i++)
	{
		cout << ' ' << tid[i];
	}
	cout << endl;
}
