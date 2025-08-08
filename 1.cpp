#include <iostream>
#include <string>

using namespace std;

int main() {
  string fullName;
  int age;

  cout << "Enter your full name: ";
  getline(cin, fullName); 

  cout << "Enter your age: ";
  cin >> age;

  cout << "Hello, " << fullName << "! You are " << age << " years old." << endl;
  return 0;
}

