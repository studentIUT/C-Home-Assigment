//Basic Arithmetic Operation(Sampre program)
/* Name: Sedelkov Andrey
ID: U2310240
*/

#include <iostream>
using namespace std;

int main() {
	//program 1
	cout << "Hello world" << endl;
	//program 2
	int a = 2;
	float b = 2.5;
	char c = 1;
	cout << "\nint:" << a << "\nfloat:" << b << "\nchar:" << c << endl;
	//program 3
	int num1, num2, result;
	cout << "\nEnter two numbers" << endl;
	cin >> num1 >> num2;
	result = (num1 + num2);
	cout << "Result of summary: " << result << endl;
	//program 4
	double aa, bb, area1;
	cout << "\nEnter the side of rectagle:" << endl;
	cin >> aa >> bb;
	area1 = aa * bb;
	cout << "Area of rectangle = " << area1 << endl;
	//program 5
	double a1, area2;
	cout << "\nEnter the side of square:" << endl;
	cin >> a1;
	area2 = a1 * a1;
	cout << "Area of square = " << area2 << endl;
	system("pause");
	return 0;
}