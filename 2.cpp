#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int currentAge = 23;
    int targetAge = 33;
    int currentYear = 2025; 

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Hello " << fullName << ", You are " << currentAge << " years old!" << endl;

    int yearTurnTarget = currentYear + (targetAge - currentAge);
    cout << "You will turn " << targetAge << " in the year " << yearTurnTarget << endl;

    return 0;
}
