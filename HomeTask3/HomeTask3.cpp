#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;

    cin >> a >> b >> c;

    d = (b * b) + (-4 * a * c);

    cout <<
        (-b + sqrt(d)) / (2*a) << endl << (-b - sqrt(d)) / (2*a) << endl;
}