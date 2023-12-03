#include <iostream>
using namespace std;

string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName) {
    for (int i = 0; i < size; ++i) {

        if (nameArr[i] == contactName) 
        {
            if (contactName == "Arjun") {

                return phoneNumberArr[i] + " *** MY NAME ***";
            } else {

                return phoneNumberArr[i];
            }
        }
    }
    return "";
}

int main() {
    const int array_size = 20;
    string names[array_size];
    string phoneNumbers[array_size];
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> names[i] >> phoneNumbers[i];
    }

    string contactName;
    cin >> contactName;

    string phoneNumber = GetPhoneNumber(names, phoneNumbers, n, contactName);

    if (phoneNumber != "") {
        cout << phoneNumber << endl;
    } else {
        cout << "Contact not found" << endl;
    }

    return 0;
}
