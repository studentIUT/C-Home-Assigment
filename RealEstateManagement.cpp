/*
ID: U2310240
Name: Sedelkov Andrey
Date: 16.02.2024
*/

//including preprocessor
#include <iostream>
#include <string>
//using namespace
using namespace std;


//begin of class
class Manage {
	
	//private data of class
private:
	int propertyId = 0;
	string propertyName;
	string propertyType;
	int propertyValue = 0;

	//public part of class
public:
	void setPropertyId(int x) {					//setting
		 propertyId = x;
	}	
	int getPropertyId() {						//getting
		return propertyId;
	}
	void setPropertyName(string x) {			//setting
		propertyName = x;
	}
	string getPropertyName() {					//getting
		return propertyName;
	}
	void setPropertyType(string x) {			//setting
		propertyType = x;
	}
	string getPropertyType() {					//getting
		return propertyType;
	}
	void setPropertyValue(int x) {				//setting
		propertyValue = x;
	}
	int getPropertyValue() {					//getting
		return propertyValue;
	}

}; //end of class

int main() {
	//our variables and declarate mng of type manage 
	Manage mng;
	int a, d, num;
	string b, c;

	do
	{
		system("cls");								 //clear terminal from previous output
		cout << "Which program would you like to use?\n1 - Real Estate Management System\n2 - Exit\nEnter number: "; cin >> num;
			switch (num)
			{ case 1:
				system("cls");								 //clear terminal from previous output
				cout << "Enter Id: ";  cin >> a;		   	 //input ID
				mng.setPropertyId(a);
				cout << "Enter Name: ";  cin >> b;		     //input Name
				mng.setPropertyName(b);
				cout << "Enter Type: ";  cin >> c;			 //input Type
				mng.setPropertyType(c);
				cout << "Enter Value: ";  cin >> d;			 //input Value
				mng.setPropertyValue(d);

				cout << "\n**********OUTPUT**********\n" << endl; //output of result

				cout << "Id:" << mng.getPropertyId() << endl;
				cout << "Name:" << mng.getPropertyName() << endl;
				cout << "Type:" << mng.getPropertyType() << endl;
				cout << "Value:" << mng.getPropertyValue() << "$" << endl;
				break;
			case 2:
				return 0;							//end of the program
			default:
				cout << "ERROR!!!!\nPlease tru again" << endl;
				break;
			}
		system("pause");							 //pause working
	} while (true);
}