#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Enter 1st Number : ";
    cin >> n1;
    cout << "Enter 2nd Number : ";
    cin >> n2;
    cout << "Enter 3rd Number : ";
    cin >> n3;
    if (n1 > n2 && n1 > n3){
        cout << "n1 is largest number";
    }
    else if (n2 > n1 && n2 > n3){
        cout << "n2 is largest number";
    }
    else if (n3 > n1 && n3 > n2){
        cout << "n3 is largest number";
    }
    else {
        cout << "Something went wrong";
    }
}