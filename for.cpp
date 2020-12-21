#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	

	double z, y, sum = 0;
	cout << "Enter y = ";
	cin >> y;
	for (int m = 1; m < 6; m++)
	{
		sum = sum + sin(m);
	}
	z = sum + pow(y, 5);
	cout << "z = " << z;
}

