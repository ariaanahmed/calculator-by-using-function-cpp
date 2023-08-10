#include <iostream>
#include <conio.h>
using namespace std;

double doTheMath(double, char, double);

int main() {
    double num1, num2;
    char oper;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter an operator +, -, *, / : ";
    cin >> oper;
    cout << "Enter num2: ";
    cin >> num2;

    double result = doTheMath(num1, oper, num2);

    cout << num1 << oper << num2 << " = " << result;
    
    getch();
}

double doTheMath(double x, char op, double y) {
    double result;

    if(op == '+') {
        result = x + y;
    } else if(op == '-') {
        result = x - y;
    } else if (op == '*') {
        result = x * y;
    } else if (op == '/') {
        if(y == 0) {
            cout << "invalid divide by 0 is not allowed ";
            return 0;
        } else {
            result = x / y;
        }
    } else {
        cout << "Invalid operator, try again ";
        return 0;
    } 
    return result;
}