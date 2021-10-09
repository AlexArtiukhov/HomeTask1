#include <iostream>

using namespace std;

int number;

int main()
{
    cout << "Enter number: ";
    cin >> number;
    while (number > 0) {
        int digit = number % 10;
        number = number / 10;
        cout << digit;
    }
}