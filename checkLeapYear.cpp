#include <iostream> 
using namespace std;

int main() {
    int year; 
    cout << "Enter a year : ";
    cin >> year;

    // leap year is perfectly divisible by 400
    if (year % 400 == 0) {
        cout << year << " is a leap year";
    }
    else if (year % 100 == 0) {
        cout << year << " is not a leap year";
    }
    else if (year % 4 == 0) {
        cout << year << " is a leap year";
    }
    else {
        cout << year << "is not a leap year";
    }
}