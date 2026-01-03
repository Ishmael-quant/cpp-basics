#include <iostream>

using namespace std;

int main () {
  int age;
  cout << "Please enter your age . I need it for verification :"<< '\n';
  cin >> age;
  cout << "Enter your name: " << endl;
  cin >> name;
  if (age<=18){
    cout << "You are wlecome, " << name;
  }
  else {
    cout << "You are not welcomed, " << name;
  }
  
  return 0;
}
