#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double x = 13.056, result;
	result = log10(x);
	cout << "log10(x) = " << result << endl;

	x = -3.591;
	result = log10(x);
	cout << "log10(x) = " << result << endl;

	_getch();
	return 0;
}