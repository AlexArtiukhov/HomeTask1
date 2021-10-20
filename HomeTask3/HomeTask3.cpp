#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int d = (b * b) + (-4 * a * c);
	if (d < 0)
	{
		cout << "d is < than 0";
	}
	else
	{
		cout << (-b + sqrt(d)) / (2 * a) << endl
			<< (-b - sqrt(d)) / (2 * a) << endl;
	}
}