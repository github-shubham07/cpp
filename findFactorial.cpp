#include <iostream>
using namespace std;

int main()
{
    int n;
    long factorial = 1.0;

    cout << "Enter positive integer : ";
    cin >> n;

    if (n < 0)
    {
        printf("Error! Negative number doesn't exist");
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "factorial of " << n << " is " << factorial;
    }
}