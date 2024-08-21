/*Lab assigment 4 (loop)
ID: U2310240
Sedelkov Andrey
date: 06.10.2023
group 23-11*/

#include <iostream>
using namespace std;
int main() {
    int const j = 0;
    int h = 0;
    while (j == 0)
    {
        if (h != 0)
            system("pause"); h = 1;
        system("cls");
        cout << "Please enter a number of program:\n1 - Program to calculate sum of numbers from m to n\n2 - Program to print sum of first 20 terms of Fibonacci series\n3 - Program to input a number and then calculate sum of its digits\n4 - program to print the reverse of a number" << endl;
        int g;
        cin >> g;
        int m, n, num1, num2, sum = 0;
        switch (g)
        {
        case 1://Program 1
            m = 0, n = 0, num1 = 0, num2 = 0, sum = 0;
            cout << "Enter a numbers to find the sum between numbers:" << endl;
            cin >> n >> m;
            if (m > n) { num1 = n; num2 = m; }
            else { num1 = m; num2 = n; }
            while (num1 <= num2)
            {
                sum = sum + num1;
                num1++;
            }
            cout << "Sum is equal= " << sum << endl << endl;
            break;
        case 2://Program 2
            cout << "Sum of first 20 terms of Fibonacci series is equal: ";
            n = 0, m = 1, num1 = 0, sum = 1;
            for (int i = 0; i <= 18; i++)//because two of them are already used
            {
                num1 = n + m;
                sum += num1;
                n = m; m = num1;

            }
            cout << sum << endl;
            break;
        case 3://Program 3
            cout << "\nEnter a number to calculate sum of its digits: ";
            sum = 0; num1 = 0;
            cin >> num1;
            while (num1 != 0) {
                int digit = num1 % 10; sum += digit;
                num1 /= 10;
            }
            cout << "Sum of digits:" << sum << endl;
            break;
        case 4://Program 4
            num1 = 0;
            cout << "\nEnter a number to print the reverse of a number: ";
            cin >> num1;
            cout << "reverse number: ";
            while (num1 != 0) {
                int digit = num1 % 10;
                num1 /= 10;
                cout << digit;
            }
            cout << endl;
            break;
        default:
            cout << "ERROR!!! Please try again" << endl;
            break;
        }
    }
}