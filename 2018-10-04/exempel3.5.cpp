// delsträngar
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "e-post: ";
	string epost;
	getline(cin, epost);
	int pos = epost.find('@', 0);
	string person = epost.substr(0, pos);
	int start = pos+1;
	int langd = epost.length()-start;
	string org = epost.substr(start, langd);
	cout << "Person: " << person << endl;
	cout << "Organisation: " << org << endl;
	return 0;
}
