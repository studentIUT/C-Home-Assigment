/*Lab Assigment 8 (Recursion)
ID: U2310240
Name: Sedelkov Andrey
Date: 10.11.23*/

#include <iostream>
using namespace std;
//program 1
int power(int x, int y, int result) {
    if (y == 0)
        return result;
    return power(x, y - 1, result * x);
}
//program 2
int sum(int x, int result) {
    if (x == 0)
        return result;
    return sum(x - 1, result + x);
}
//program 3
int fin(int x) {
    if (x == 0 || x == 1)
        return x;
    return fin(x - 1) + fin(x - 2);
}
//program 4
int gcd(int x, int y) {
    if (y == 0)
    {
        return x;
    }
    return gcd(y, x % y);
}
//program 5
int f(int x, int y) {
    if (y <= x) {
        return f(x - y, y) + 1;
    }
    else if (x < y)
    {
        return 0;
    }
}


int main() {
    int Case, x, y, i = 0, res = 0, h = 0;
    do
    {
        if (h != 0)
            system("pause"); system("cls"); h = 1;
        cout << "1 - program to calculate the x y using a tail recursive function\n2 - program to find sum of natural numbers using recursion\n3 - program to display Fibonacci Series Using Recursion\n4 - program to find G.C.D for two integers using recursion\n5 - Program to compute F(x,y)\n6 - exit from the program\n************************************************************** " << endl;
        cout << "Enter number of the program: "; cin >> Case;

        switch (Case)
        {
        case 1://program 1
            system("cls");
            cout << "enter x: "; cin >> x;
            cout << "enter y: "; cin >> y;
            cout << power(x, y, 1) << endl;
            break;
        case 2://program 2
            system("cls");
            cout << "enter n: "; cin >> x;
            cout << sum(x, 0) << endl;
            break;
        case 3://program 3
            system("cls");

            cout << "enter n: "; cin >> x;
            i = 0;
            while (fin(i) <= x)
            {
                cout << fin(i) << " ";
                i++;
            }
            cout << endl;
            break;
        case 4://program 4
            system("cls");
            cout << "enter n: "; cin >> x;
            cout << "enter m: "; cin >> y;
            cout << gcd(x, y);
            break;
        case 5://program 5
            system("cls");
            cout << "enter x: "; cin >> x;
            cout << "enter y: "; cin >> y;
            cout << f(x, y) << endl;
            break;
        case 6:
            cout << "Thank you for using my app. Good bye!" << endl;
            return 0;
        default:
            cout << "ERROR!!! Please enter the correct value" << endl;
            break;
        }
    } while (true);
}