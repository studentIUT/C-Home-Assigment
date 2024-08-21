/*Theme: Lab Assigment 7 (Functions)
Grouo: 23-11
ID: U2310240
Name: Sedelkov Andrey
Date:03.11.2023*/


#include <iostream>
#include <math.h>
using namespace std;
double const pi = 3.14;

//program 1
double area(double r)
{
	return(pi * r * r);
}
double area(double a, double b)
{

	return(a * b);
}
double area(double a, double b, double c)
{

	if (a < b + c && b < a + c && c < b + a)
	{
		double P, S;
		P = (a + b + c) / 2;
		S = sqrt(P * (P - a) * (P - b) * (P - c));
		return S;
	}

	cout << "it is not a triangle" << endl;
	return 999999999999999;


}
double area()
{
	double a; cin >> a;
	return(a * a);
}
//***********************************************************


//program 2
double Circumference(double r)
{
	return(2 * pi * r);
}
double Circumference(double a, double b)
{
	return 2 * (a + b);
}
double Circumference(double a, double b, double c)
{
	return (a + b + c) / 2;
}
double Circumference()
{
	double a; cin >> a;
	return(4 * a);
}
//***********************************************************

//program 3
int Max(int a, int b, int c) {
	if ((a >= b >= c) || (a >= c >= b)) {
		return a;
	}
	else if ((b >= a >= c) || (b >= c >= a)) {
		return b;
	}
	else
		return c;
}
double Max(double a, double b, double c) {
	if (a >= b && a >= c) {
		return a;
	}
	else if (b >= a && b >= c) {
		return b;
	}
	else return c;
}
//***********************************************************

//program 4

double type1(double n) {

	do {
		cout << "Which type of variable " << n << " you would like to use?\n1 - int\n2 - float\n3 - char" << endl;
		int choose; cin >> choose;

		switch (choose)
		{
		case 1:  cout << "enter value: "; int a; cin >> a; return a; break;
		case 2:  cout << "enter value: "; double b; cin >> b; return b; break;
		case 3:  cout << "enter value: "; char c;  cin >> c; return c; break;
		default: cout << "error!" << endl; system("pause");
			break;
		}
	} while (true);
}
template<class T>
T Max2(T a, T b, T c) {

	if (a >= b && a >= c) {
		return a;
	}
	else if (b >= a && b >= c) {
		return b;
	}
	else return c;
}


int main() {
	int Case1, h = 0, Case2, A, B, C; double r, a, b, c;

	do
	{
		if (h != 0)
			system("pause"); system("cls"); h = 1;
		cout << "Please enter the number of program\n1 - Program to calculate area \n2 - Program to calculate circumference  \n3 - Program to find largest among three numbers\n4 - Program to find largest among three numbers by templane \n5 - exit from the program" << endl;
		cin >> Case1;
		switch (Case1)
		{
		case 1: //program 1
			system("cls");
			cout << "Please choose the figure\n1 - Circle\n2 - Rectangle \n3 - Triangle\n4 - Square \n5 - cancel" << endl;
			cin >> Case2;
			switch (Case2)
			{
			case 1:
				system("cls");
				cout << "Enter the radius of the circle: ";
				cin >> r;
				cout << "Area of the circle: " << area(r) << endl;
				break;
			case 2:
				system("cls");
				cout << "Enter the length and width of the rectangle: ";
				cin >> a >> b;
				cout << "Area of the rectangle: " << area(a, b) << endl;
				break;
			case 3:
				system("cls");
				cout << "Enter the base and height of the triangle: ";
				cin >> a >> b >> c;
				cout << "Area of the triangle: " << area(a, b, c) << endl;
				break;
			case 4:
				system("cls");
				cout << "Enter the side length of the square: ";
				cout << "Area of the square: " << area() << endl;
				break;
			case 5: break;
			default:
				system("cls");
				cout << "ERROR!!! Please enter the correct value" << endl;
				break;
			}
			break;
		case 2: // program 2
			system("cls");
			cout << "Please choose the figure\n1 - Circle\n2 - Rectangle \n3 - Triangle\n4 - Square \n5 - cancel" << endl;
			cin >> Case2;
			switch (Case2)
			{
			case 1:
				system("cls");
				cout << "Enter the radius of the circle: ";
				cin >> r;
				cout << "Circumference of the circle: " << Circumference(r) << endl;
				break;
			case 2:
				system("cls");
				cout << "Enter the length and width of the rectangle: ";
				cin >> a >> b;
				cout << "Circumference of the rectangle: " << Circumference(a, b) << endl;
				break;
			case 3:
				system("cls");
				cout << "Enter the base and height of the triangle: ";
				cin >> a >> b >> c;
				cout << "Circumference of the triangle: " << Circumference(a, b, c) << endl;
				break;
			case 4:
				system("cls");
				cout << "Enter the side length of the square: ";
				cout << "Circumference of the square: " << Circumference() << endl;
				break;
			case 5: break;
			default:
				system("cls");
				cout << "ERROR!!! Please enter the correct value" << endl;
				break;
			}
			break;
		case 3: //program 3
			system("cls");
			cout << "Enter type of number\n1 - int\n2 - float" << endl;
			cin >> Case2;
			switch (Case2) {
			case 1:
				system("cls");
				cout << "Please enter 3 integers numbers:" << endl;
				cin >> A >> B >> C;
				cout << Max(A, B, C) << endl;
				break;
			case 2:
				system("cls");
				cout << "Please enter 3 floating point numbers:" << endl;
				cin >> a >> b >> c;
				cout << Max(a, b, c) << endl;
				break;
			}
			break;
		case 4: // program 4
			system("cls");
			cout << "Maximum is = " << Max2(type1(3), type1(2), type1(1)) << endl;
			break;
		case 5:
			cout << "Thank you for using my app. Good bye!" << endl;
			return 0;
		default:
			cout << "ERROR!!! Please enter the correct value" << endl;
			break;
		}
	} while (1);
}