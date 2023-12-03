#include <iostream>
using namespace std;



struct Books{

    string name;
    string author;
    int publicationYear;


};

int main(){

Books myBook;


cout << "Enter Book Name: " << endl;
getline (cin, myBook.name);
cout << "Enter the Name of Author: " << endl;
getline(cin, myBook.author);
cout << "Enter the Publication Year: " << endl;
cin >> myBook.publicationYear;





cout <<"Book Name: " << myBook.name << endl;
cout << "Author: " << myBook.author << endl;
cout << "Publication Year: " << myBook.publicationYear << endl;





    return 0;
}