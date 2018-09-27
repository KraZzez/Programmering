// fält med platsbyte
#include <iostream>
using namespace std;

int main()
{
	int vikt[] = {67,54};
	cout << "Innehåll i fältet vikt: "
	<< vikt[0] << ' ' << vikt[1] << endl;
	
	int temp = vikt[0];
	
	vikt[0] = vikt[1];
	
	vikt[1] = temp;
	
	cout << "Innehåll i fältet vikt efter bytet: "
	<< vikt[0] << ' ' << vikt[1] << endl;
	
	return 0;
}
	 
