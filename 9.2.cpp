/*
U2310240
Sedelkov Andrey
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Book { //creatre class
public:
    int id = 0;
    string name;
    string author;
    int publication = 0;
};

void writeToLibraryFile(const Book& book) { //output function
    ofstream libraryFile("Library.txt", ios::app);
    if (libraryFile.is_open()) {
        libraryFile << book.id << " " << book.name << endl;
        libraryFile.close();
    }
    else {
        cout << "Unable to open Library.txt" << endl;
    }
}

void writeToAuthorFile(const Book& book) {//output function
    ofstream authorFile("Author.txt", ios::app);
    if (authorFile.is_open()) {
        authorFile << book.author << " " << book.publication << endl;
        authorFile.close();
    }
    else {
        cout << "Unable to open Author.txt" << endl;
    }
}

void readFromFile(const string& filename) {//input function
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open " << filename << endl;
    }
}

int main() {//main function
    Book book;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter ID of book: ";
        cin >> book.id;
        cin.ignore(); // Clear the input buffer
        cout << "Enter Name of book: ";
        getline(cin, book.name);
        cout << "Enter Author Name: ";
        getline(cin, book.author);
        cout << "Enter year of Publication: ";
        cin >> book.publication;

        writeToLibraryFile(book);
        writeToAuthorFile(book); int ch = 0;
        if (i==2)
        {
            cout << "do you want to add new?(1-yes/0-no)" << endl;
           cin >> ch;
;        if (ch == 1)
            {i--;}
        }
        
    }
    cout << "\nContent of Library.txt:\n";
    readFromFile("Library.txt");//input from file

    cout << "\nContent of Author.txt:\n";
    readFromFile("Author.txt");

    return 0;
}