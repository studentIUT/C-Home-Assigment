/*Functions
ID: U2310240
Sedelkov Andrey
27.10.2023*/
#include <iostream>
using namespace std;

void swap() {
	char a, b, c;
	cout << "enter value x: "; cin >> a;
	cout << "enter value y: "; cin >> b;
	c = b; b = a; a = c;
	cout << "x: " << a << endl;
	cout << "y: " << b << endl;
}
int time() {
	int hour, second, minute;
	float m, s;
	cout << "Enter hours, minutes and seconds" << endl;
	cin >> hour >> minute >> second;
	if (hour < 0 || minute < 0 || second < 0) {
		cout << "Error!! Values should be positive!" << endl; return 0;
	}
	if (second >= 60)
	{
		minute = minute + second / 60;
		second %= 60;
	}
	if (minute >= 60)
	{
		hour += minute / 60;
		minute = minute % 60;
	}
	cout << "time: " << hour << ":" << minute << ":" << second << " = ";
	s = second;
	m = hour * 60 + minute + s / 60;
	cout << m << " in minutes" << endl;
	return 0;
}
float factorial(float x)
{
	int fact = 1;
	while (x >= 1)
	{
		fact = fact * x;
		x--;
	}
	return fact;
}
int degree(int a) {
	int res = 1;
	for (int i = 1; i <= a; i++)
		res *= a;
	return res;
}
float area() {
	int r; cout << "Enter radius of the circle: "; cin >> r;
	float res;
	res = 3.14 * r * r;
	cout << "area of circle = " << res << endl;
	return res;
}
int main() {
	int Case, h = 0; float result = 0;
	do
	{
		if (h != 0)
			system("pause"); h = 1; system("cls");
		cout << "Please enter the number of program\n1 - Program to swap two values\n2 - Program to convert time to minutes\n3 - Program to sum the series\n4 - Program to calculate area of a circle\n5 - exit from the program" << endl;
		cin >> Case;
		switch (Case)
		{
		case 1: //program 1
			swap(); break;
		case 2: // program 2
			time(); break;
		case 3: //program 3
			cout << "enter number of series: ";
			int n; cin >> n;
			for (int i = 1; i <= n; i++)
			{
				result += (degree(i) / factorial(i));
			}
			cout << "Sum of series: " << result << endl; break;
		case 4: // program 4
			area();  break;
		case 5:
			cout << "Thank you for using my app. Good bye!" << endl;
			return 0;
		default:
			cout << "ERROR!!! Please enter the correct value" << endl;
			break;
		}
	} while (1);
}