#include <iostream>
using namespace std;

string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName) {
    for (int i = 0; i < size; ++i) {
        if (nameArr[i] == contactName) {
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
    const int MAX_SIZE = 20;
    string names[MAX_SIZE];
    string phoneNumbers[MAX_SIZE];
    int n;

    cout << "Enter the number of entries: ";
    cin >> n;

    cout << "Enter " << n << " pairs of names and phone numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> names[i] >> phoneNumbers[i];
    }

    string contactName;
    cout << "Enter a name to search: ";
    cin >> contactName;

    string phoneNumber = GetPhoneNumber(names, phoneNumbers, n, contactName);

    if (phoneNumber != "") {
        cout << "Phone number: " << phoneNumber << endl;
    } else {
        cout << "Contact not found" << endl;
    }

    return 0;
}
