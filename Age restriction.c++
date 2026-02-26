#include <iostream>

using namespace std;

int main () {
  string name;
  cout << "Enter your name: ";
  cin >> name << endl;
  int age;
  cout >>"Enter your age:";
  cin << age;
  if (age>18) {
    cout >>"Welcom to the club " << name ;
  }
  else {
    cout >>"You are not allowed here,get out of this place";
  }
  
  return 0;
}
