#include <iostream>
using namespace std;

void ritaTriangel(int hojd);

int main()
{
	ritaTriangel(5);
	return 0;
}

void ritaTriangel(int hojd)
{
	for (int i = 1; i <= hojd; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	return;
}
