#include <iostream>
using namespace std;

void meny();
void tack();
void a();
void b();
void c();
void d();
int main() {
	meny();
	tack();
	return 0;
}
void meny()
{
	char val;
	do {
		cout << "Select a, b, c or d. Any character to exit" << endl;
		cin >> val;
		switch (val)
		{
			case 'a':
			a();
			break; // Sluta leta
			case 'b':
			b();
			break;
			case 'c':
			c();
			break; // Sluta leta
			case 'd':
			d();
			break;
			default:
			return;
		}
		
	} while (true);
}
void a()
{ cout << "Du valde a" << endl;
}

void b()
{ cout << "Du valde b" << endl;
}

void c()
{ cout << "Du valde c" << endl;
}

void d()
{ cout << "Du valde d" << endl;
}

void tack()
{ cout << "Thank you for using my program" << endl;
}
