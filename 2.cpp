#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int currentAge;
    int currentYear = 2025;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your current age: ";
    cin >> currentAge;

    cout << "Hello " << fullName << ", You are " << currentAge << " years old!" << endl;

    int yearTurn60 = currentYear + (60 - currentAge);
    cout << "You will turn 60 in the year " << yearTurn60 << endl;

    return 0;
}

