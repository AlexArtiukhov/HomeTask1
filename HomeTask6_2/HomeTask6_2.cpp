#include <iostream>

using namespace std;

int main()
{
	int n;
	int a = 0;
	cin >> n;

	for (; n >= 0; a++)
	{
		n -= 2;
	}

	cout << a;
}