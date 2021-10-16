#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int d = (b * b) + (-4 * a * c);
	cout << (-b + sqrt(d)) / (2 * a) << endl
		<< (-b - sqrt(d)) / (2 * a) << endl;
}