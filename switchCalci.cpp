#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    char op;
    cout << "Enter 1st Number : ";
    cin >> n1;
    cout << "Enter Operator : ";
    cin >> op;
    cout << "Enter 2nd Number : ";
    cin >> n2;

    switch (op)
    {
    case '+':
        cout << "Addition is : " << n1 + n2;
        break;

    case '-':
        cout << "subtraction is : " << n1 - n2;
        break;

    case '*':
        cout << "multiplication is : " << n1 * n2;
        break;

    case '/':
        cout << "division is : " << n1 / n2;
        break;   
    
    default:
        cout << "invalid operator";
        break;
    }
}