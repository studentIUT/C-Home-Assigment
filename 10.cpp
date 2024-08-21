/*Lab Assigment 9 (2D Arrays)
ID: U2310240
Name: Sedelkov Andrey
Date: 24.11.23*/
#include <iostream>
using namespace std;

//program 1
void displayarray(int arr[][5], int sizerow, int sizecol) {

    for (int i = 0; i < sizerow; i++)
    {
        for (int j = 0; j < sizecol; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void enterarray(int arr[][5], int sizerow, int sizecol) {
    for (int i = 0; i < sizerow; i++)
    {
        for (int j = 0; j < sizecol; j++) {
            cout << "Enter ellement of [" << i << "][" << j << "] : ";  cin >> arr[i][j];
        }
    }
    displayarray(arr, sizerow, sizecol);
}
void sum(int arr[][5], int arr2[][5], int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] += arr2[i][j];
        }
    }
    cout << "\nSum of 2 arrays:" << endl; displayarray(arr, row, col);
}
void transposearray(int arr[][5], int sizerow, int sizecol) {
    for (int j = 0; j < sizerow; j++)
    {
        for (int i = 0; i < sizecol; i++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void product(int mat1[][5], int mat2[][5], int mat3[][5], int rows1, int cols1, int rows2, int cols2) {
    int res_rows, res_cols;
    if (cols1 != rows2 && cols2 != rows1)
    { cout << "The number of column in one matrix must be equal to number of rows in other:" << endl; exit(1);}
    else if (cols1 == rows2)
    {
        res_rows = rows1;
        res_cols = cols2;
        cout << "Enter the element of First Matrix: " << endl;
        cout << "*******************************************************" << endl;
        enterarray(mat1, rows1, cols1);
        cout << "Enter the element of Second Matrix:" << endl;
        cout << "***************************************************" << endl;
        enterarray(mat2, rows2, cols2);
        for (int i = 0; i < res_rows; i++)
        {
            for (int j = 0; j < res_cols; j++)
            {
                mat3[i][j] = 0;
                for (int k = 0; k < rows2; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }
    else if (cols2 == rows1)
    {
        res_rows = rows1;
        res_cols = cols2;
        cout << "Enter the element of First Matrix: " << endl;
        cout << "*******************************************************" << endl;
        enterarray(mat1, rows1, cols1);
        cout << "Enter the element of Second Matrix:" << endl;
        cout << "*******************************************************" << endl;
        enterarray(mat2, rows2, cols2);
        for (int i = 0; i < res_rows; i++)
        {
            for (int j = 0; j < res_cols; j++)
            { mat3[i][j] = 0;
                for (int k = 0; k < rows2; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }
    cout << "Elements in the product matrix are: " << endl;
    displayarray(mat3, res_rows, res_cols);
}
//program 2
void sumsalesman(int arr[][5], int sizerow, int sizecol = 3) {
    int result = 0;
    for (int i = sizerow; i < sizerow + 1; i++)
    {
        for (int j = 0; j < sizecol; j++) {

            result += arr[i][j];
        }
    }
    cout << "sum of sales of " << sizerow << " salesman = " << result << endl;
}
void sumsalesitem(int arr[][5], int sizerow, int sizecol) {
    int result = 0;
    for (int i = 0; i < sizerow; i++)
    {
        for (int j = sizecol; j < sizecol + 1; j++) {
            result += arr[i][j];
        }
    }
    cout << "sum of sales of " << sizecol << " item = " << result << endl;
}

int main() {
    int Case, K, num, sizerow, sizecol, rows1, cols1, rows2, cols2, h = 0; int const row = 5, col = 5;
    int arr[row][col] = {}, mat1[row][col] = {}, mat2[row][col] = {}, mat3[row][col] = {};
    do
    {
        if (h != 0)
            system("pause"); system("cls"); h = 1;
        cout << "1 - menu driven program to read and display an m * n matrix. Also find the sum, transpose and product of two m * n matrices.\n2 - company programm\n3 - exit from the program\n**************************************************************\nEnter number of the program: "; cin >> Case;
        switch (Case) {
        case 1: //program 1
            system("cls");
            cout << "1 - program to display an m * n matrix\n2 - program to find the sum of two m * n matrix\n3 - program to transpose an m * n matrix\n4 - program to find the product of two m * n matrix\n5 - Return back\n**************************************************************\nEnter number of the program: "; cin >> num;
            switch (num)
            {
            case 1:
                system("cls");
                cout << "Enter Size of rows (maximum: " << row << " ) : "; cin >> sizerow;
                cout << "Enter Size of collons (maximum: " << col << " ) : "; cin >> sizecol;
                enterarray(mat1, sizerow, sizecol);
                break;

            case 2:
                system("cls");
                cout << "NOTE!!! you enter the size for both arrays" << endl;
                cout << "Enter Size of rows (maximum: " << row << " ) : "; cin >> sizerow;
                cout << "Enter Size of collons (maximum: " << col << " ) : "; cin >> sizecol;
                cout << "1st 2d array:\n"; enterarray(mat1, sizerow, sizecol);
                cout << "2nd 2d array:\n"; enterarray(mat2, sizerow, sizecol);
                sum(mat1, mat2, sizerow, sizecol);
                break;
            case 3:
                system("cls");
                cout << "Enter Size of rows (maximum: " << row << " ) : "; cin >> sizerow;
                cout << "Enter Size of collons (maximum: " << col << " ) : "; cin >> sizecol;
                cout << "Array:\n"; enterarray(mat1, sizerow, sizecol);
                cout << "\ntranspose array:" << endl; transposearray(mat1, sizerow, sizecol);
                break;
            case 4:
                cout << "Input number of rows in First Matrix (maximum: " << row << " ) : ";  cin >> rows1;
                cout << "Input number of columns in First Matrix (maximum: " << col << " ) : "; cin >> cols1;
                cout << "Input number of rows in Second Matrix (maximum: " << row << " ) : "; cin >> rows2;
                cout << "Input number of cols in Second Matrix (maximum: " << col << " ) : "; cin >> cols2;
                product(mat1, mat2, mat3, rows1, cols1, rows2, cols2);
                break;
            case 5: break;
            default:
                cout << "ERROR!!! Please enter the correct value" << endl; break;
            }
            break;
        case 2: //program 2
            system("cls");
            cout << "Imput data about sales" << endl;
            sizerow = 5; sizecol = 3;
            enterarray(arr, sizerow, sizecol);
            cout << "1 - total sales by each salesman\n2 - Total sales of each item\n3 - exit from the program\n**************************************************************\nEnter number of the programm: "; cin >> num;
            switch (num)
            {
            case 1:cout << "\nenter num of salesman(1-5) : ";   cin >> sizerow;
                sumsalesman(arr, --sizerow);
                break;

            case 2:
                cout << "\nenter num of item(1-3) : ";   cin >> sizecol;
                sumsalesitem(arr, 5, --sizecol);
            case 3: break;
            default:
                cout << "ERROR!!! Please enter the correct value" << endl;
                break;
            }
            break;
        case 3:
            cout << "Thank you for using my app. Good bye!" << endl;
            return 0;
        default:
            cout << "ERROR!!! Please enter the correct value" << endl;
            break;
        }
    } while (true);
}