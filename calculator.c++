#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //define variables
    string operation;
    double number1, number2;
    //get user input
    cout <<"Enter First Number: ";
    cin >> number1;
    cout << "Enter Operation (+ ,- ,* ,/): ";
    cin >> operation;
    cout << "Enter Second Number: ";
    cin >> number2;

    //if-else statements for calculations
    if (operation == "+") {
        cout << number1 + number2;
    }
    else if (operation == "-") {
        cout << number1 - number2;
    }
    else if (operation == "*") {
        cout << number1 * number2;
    }
    else if (operation == "/") {
        cout << number1 / number2;
    }
    else {
        cout <<"!Operation not recognized";
    }


    return 0;
}using namespace std;

int main() {
    //define variables
    string operation;
    double number1, number2;
    //get user input
    cout <<"Enter First Number: ";
    cin >> number1;
    cout << "Enter Operation (+ ,- ,* ,/): ";
    cin >> operation;
    cout << "Enter Second Number: ";
    cin >> number2;

    if (operation == "+") {
        cout << number1 + number2;
    }
    else if (operation == "-") {
        cout << number1 - number2;
    }
    else if (operation == "*") {
        cout << number1 * number2;
    }
    else if (operation == "/") {
        cout << number1 / number2;
    }
    else {
        cout <<"!Operation not recognized";
    }


    return 0;
}
