//Practice Assignments (Assignmen 2)
/* Name: Sedelkov Andrey
ID: U2310240
*/

#include <iostream>
#include <math.h>
using namespace std;
float pi = 3.14;
int main() {
link:
	cout << "Which figure do you want to find an area?\nEnter `1` to Calculate Area and Circumference of Circle\nEnter `2` to Calculate Area of Scalene Triangle\nEnter `3` to Calculate Area of Equilateral Triangle\nEnter `4` to Calculate Area of Right angle Triangle" << endl;
	float R;
	int V;
	cin >> V;
	switch (V)
	{

	case (1):
		//Program 1
		cout << "Please, enter radius: ";
		cin >> R;

		cout << "\nCircumference = " << 2 * pi * R << endl;
		cout << "\nArea = " << pi * R * R << "\n\n\n" << endl;
		break;
	case (2):
		//Prodram 2
		float S, P, a, b, c;
		cout << "Please, enter sides of Scalene triangle: ";
		cin >> a >> b >> c;

		P = (a + b + c) / 2;
		S = sqrt(P * (P - a) * (P - b) * (P - c));
		cout << "\nArea of Scalene Triangle = " << S << "\n\n\n" << endl;
		break;
	case (3):

		//Program 3
		cout << "Please, enter side of Equilateral triangle: ";
		cin >> a;
		S = (sqrt(3) / 4) * a * a;
		cout << "Area of Equilateral triangle: " << S << "\n\n\n" << endl;
		break;
	case(4):
		//Program 4

		cout << "Please, enter sides of Scalene triangle: ";
		cin >> a >> b;

		S = (a * b) / 2;
		cout << "\n\nArea of Right angle Triangle = " << S << "\n\n\n" << endl;
		break;
	default:
		cout << "invalid value, please try again" << "\n\n\n" << endl;
		break;


	}
	goto link;
}