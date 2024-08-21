/*Practice Assigments-
ID: U2310240
Sedelkov Andrey
Date: 29.09.23
3*/

#include <iostream>
using namespace std;
int income(int Salary, int Tax) {
	int result;
	result = Salary - Tax;
	return result;
}
int main() {
link:
	system("pause");
	system("cls");
	int NP;
	cout << "Which program do you want to use?\n1 - program to calculate tax\n2 - test whether a number entered is positive\n3 - Program for determining the quality of steel\n4 - program to check that the entered character from a keyboard is upper case alphabet or not\n5 - program to find that entered year is leap year or not\n" << endl;
	cin >> NP;
	switch (NP)
	{
	case 1:
		//Program 1
	program1:
		int Salary, Tax;
		cout << "Program to calculate tax and your final salary\nPlease enter your salary: " << endl;
		cin >> Salary;
		if (Salary >= 0)
		{
			if (0 <= Salary && Salary <= 1500)
			Tax = Salary * 0 / 100;
			else if (1500 < Salary && Salary <= 3000)
			Tax = Salary * 10 / 100;
			else if (3000 < Salary && Salary <= 5000)
			Tax = Salary * 20 / 100;
			else if (5000 < Salary)
			Tax = Salary * 30 / 100;	
		}
		else {
			cout << "ERROR!!! Please try again\n" << endl;
			goto program1;
		}
		cout << "Tax = " << Tax << endl << "Income after tax deducation = " << income(Salary, Tax) << endl;
		cout << "\n\n";
		goto link;
		break;

	case 2:
		// Program 2
		int num;
		cout << "Program for determining the number for positivity or negativity\nPlease enter your number: " << endl;
		cin >> num;
		if (num != 0) {
			if (num > 0) {
				cout << "Your number " << num << " is positive" << endl;
			}
			else {
				cout << "Your number " << num << " is negative" << endl;
			}
		}
		else {
			cout << "Your number " << num << " is equals zero" << endl;
		}
		cout << "\n\n";
		goto link;
		break;
	case 3:
		// Program 3
		bool a, b, c;
		float hardness, Carbon, Tensile;
		cout << "Program for determining the quality of steel\nPlease enter hardness\t(normal more than 50) : " << endl;
		cin >> hardness;
		a = hardness > 50;
		cout << "Please enter carbon content\t(normal less than 0.7) : " << endl;
		cin >> Carbon;
		b = Carbon < 0.7;
		cout << "Please enter tensile strength\t(normal more than 5600)  : " << endl;
		cin >> Tensile;
		c = Tensile > 5600;

		if (a && b && c) {
			cout << "Grade of steel is 10" << endl;
		}
		else if (a && b && !c) {
			cout << "Grade of steel is 9" << endl;
		}
		else if (!a && b && c) {
			cout << "Grade of steel is 8" << endl;
		}
		else if (a && !b && c) {
			cout << "Grade of steel is 7" << endl;
		}
		else if ((a && !b && !c) || (!a && b && !c) || (!a && !b && c)) {
			cout << "Grade of steel is 6" << endl;
		}
		else if (!a && !b && !c) {
			cout << "Grade of steel is 5" << endl;
		}
		cout << "\n\n";
		goto link;
		break;
	case 4:
		//Program 4
		char UP;
		cout << "\n\nPlease enter the letter to check on upper or not: " << endl;
		cin >> UP;
		if (65 <= UP && UP <= 90 || 97 <= UP && UP <= 122)
		{
			if (65 <= UP && UP <= 90)
			{
				cout << "You have entered upper case alphabets" << endl;
			}
			else if (97 <= UP && UP <= 122)
			{
				cout << "You have entered the alphabet in lowercase" << endl;
			}
		}
		else
		{
			cout << "you have not entered the letters of the alphabet" << endl;
		}
		cout << "\n\n";
		goto link;
		break;
	case 5:
		// Program 5
		int year;
		cout << "Please enter the number of year to check it for leap" << endl;
		cin >> year;
		if (year % 4 == 0) {
			if (year % 400 == 0 && year % 100 == 0) {
				cout << "This is a leap year" << endl;
			}
			else if (year % 100 == 0 && year % 400 != 0) {
				cout << "This is not a leap year" << endl;}
			else {cout << "This is a leap year" << endl;}
		}
		else {cout << "This is not a leap year" << endl;		}
		cout << "\n\n";
		goto link;
		break;
	default:
		cout << "Program did not found. Please try again!" << endl << endl;
		goto link;
		break;
	}
}