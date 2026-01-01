#include <iostream>

using namespace std;

int main () {
  cout << "Hi there! Welcome to circle area and calculator." << endl;
  cout <<"We are going to start with the circumference then the area." << endl;
  const double pi = 3.142;
  double radius;
  cout << "Enter radius:";
  cin >> radius;
  double ans1 = 2 * pi * radius;
  cout << "Here is the answer :" << ans1  << endl;
  cout << "Lets continue to area. Input the radius" << endl;
  double rad;
  cin >> rad;// radius for the area
  double ans2 = pi * rad * rad;
  cout << "Area is :" << ans2;
  
  return 0;
}
