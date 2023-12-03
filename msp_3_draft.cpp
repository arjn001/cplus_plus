#include <iostream>
using namespace std;

string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName) {
    for (int i = 0; i < size; ++i) {
        if (nameArr[i] == contactName) {
            if (contactName == "YourFirstName") {
                return phoneNumberArr[i] + " *** MY NAME ***";
            } else {
                return phoneNumberArr[i];
            }
        }
    }
    return "";
}

int main() {
    const int maxSize = 20;
    string names[maxSize];
    string numbers[maxSize];
    int N;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> names[i] >> numbers[i];
    }

    string nameToFind;
    cin >> nameToFind;

    string phoneNumber = GetPhoneNumber(names, numbers, N, nameToFind);

    if (phoneNumber != "") {
        cout << phoneNumber << endl;
    } else {
        cout << "Contact not found" << endl;
    }

    return 0;
}
