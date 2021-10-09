#include <iostream>

using namespace std;

int main()
{
    int x1;
    int x2;
    cin >> x1;
    cin >> x2;
    int y1;
    int y2;
    cin >> y1;
    cin >> y2;
    cout << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
