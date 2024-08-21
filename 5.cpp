/*Control Structure (3) –for/do-while/ Nested loop
ID: U2310240
Sedelkov Andrey
13.10.2023*/

#include <iostream>
using namespace std;
int main() {
    float x, res = 0, k, fact = 1;
    int n, h = 0, stars = 1;
    do
    {
        if (h != 0)
        system("pause"); h = 1;system("cls");
        cout << "Please, enter the number of program\n1 - first program\n2 - second program\n3 - third program\n4 - forth program\n5 - fifth program\n6 - exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            //programm 1
            for (int j = 65; j < 70; j++) {
                for (int i = 64; i < j; i++)
                {
                    cout << char(j);
                }
                cout << endl;
            }
            break;
        case 2:
            //program 2
            for (int i = 1; i <= 5; i++) {

                for (int j = 4; j >= i; j--) {
                    cout << "  ";
                }
                for (int k = 1; k <= i; k++) {
                    cout << k << " ";
                }
                cout << endl;
            }break;
        case 3:
            //program 3

            for (int i = 1; i <= 3; i++) {

                for (int j = 1; j <= 3 - i; j++) {
                    cout << " ";
                }

                for (int k = 1; k <= stars; k++) {
                    cout << "*";
                }
                stars += 2;

                cout << endl;
            }
            cout << endl; 
        break;
        case 4:
            //program 4
            for (int i = 1; i <= 5; i++) {

                for (int j = 1; j <= 5 - i; j++) {
                    cout << " ";
                }

                for (int k = 1; k <= i; k++) {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 4; i >= 1; i--) {

                for (int j = 1; j <= 5 - i; j++) {
                    cout << " ";
                }

                for (int k = 1; k <= i; k++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 5:
            //Program 5

            res = 0, fact=1;
            for (int i = 1; i <= 7; i++) {
                fact *= i;
                res += i / fact;
            }
            cout << "Sum of the series: " << res << endl;
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