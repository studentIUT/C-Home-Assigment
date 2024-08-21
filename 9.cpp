/*Lab Assigment 9 (Arrays)
ID: U2310240
Name: Sedelkov Andrey
Date: 17.11.23*/
#include <iostream>
using namespace std;

void enter(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << " element: "; cin >> arr[i];
    }
}
void display_array(int arr[], int size)
{
    enter(arr, size);
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout <<"[" << arr[i] << "] ";
    }
}
float average_array(float ar[], int size, float res) {
    for (int i = 0; i < size; i++) 
    {
        cout << "Enter " << i << " element: "; cin >> ar[i];
    }
    for (int i = 0; i < size; i++)
    {
        res += ar[i];
    }
    return res /= size;
}
void insertion_array(int arr[], int size) {
    int element,position;
    display_array(arr, size);    
    cout << "\nEnter the element to be inserted: "; cin >> element;
    cout << "Enter the position to insert the element (0 to " << size << "): ";
    cin >> position;

    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position--] = element;
    cout << "Array after insertion: "<<endl;
    for (int i = 0; i <= size; i++) {
        cout << "[" << i << "] = " << arr[i] << endl;
    }
}
void deletion_array(int arr[], int size) {
    int position;
    display_array(arr, size);
    cout << "Enter the position to delete the element (0 to " << size - 1  << "): ";
    cin >> position;
    for (int i = position; i <= size; i++)
    { arr[i] = arr[i + 1];  }
    size--;
    cout << "Array after deletion: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "] = " << arr[i] << endl;
    }
}

int main() {
    int Case, size, h = 0; int const element = 20;
    int arr[element] = {}; 
    float ar[element] = {};
    do
    {if (h != 0)
      system("pause"); system("cls"); h = 1;
    cout << "1 - Program to display an array\n2 - Program to find average of array elements\n3 - Program to insert an element to an array\n4 - Program to delete an element from an array\n5 - exit from the program\n**************************************************************\nEnter number of the program: "; cin >> Case;
    switch (Case) {
    case 1: //program 1
        system("cls");
        cout << "Enter the number of elements in array(max: " << element << "): "; cin >> size;
        display_array(arr, size);
        break;
    case 2: //program 2
        system("cls");
        cout << "Enter the number of elements in array(max: " << element << "): "; cin >> size;
        cout << "Average of array elements = " << average_array(ar, size,0) << endl;
        break;
    case 3: //peogram 3
        system("cls");
        cout << "Enter the number of elements in array(max: " << element << "): "; cin >> size;
        insertion_array(arr, size);
        break;
    case 4:
        system("cls");
        cout << "Enter the number of elements in array(max: " << element << "): "; cin >> size;
        deletion_array(arr, size);
        break;
    case 5:
        cout << "Thank you for using my app. Good bye!" << endl;
        return 0;
    default:
        cout << "ERROR!!! Please enter the correct value" << endl;
        break; }
    } while (true);
}
