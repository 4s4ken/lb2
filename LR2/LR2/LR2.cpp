#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b;
	cout << "A+B = " << a + b << endl;
	cout << "A-B = " << a - b << endl;
	cout << "A*B = " << a * b << endl;
	cout << "Middle of Num = " << (a + b) / 2 << endl;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	c = b - a;
	if (a > b)
		c = a - b;
	cout << "|Max| - |Min| = " << c << endl;
	cout << "A/B = ";
	printf("%.2f", a / b);
}