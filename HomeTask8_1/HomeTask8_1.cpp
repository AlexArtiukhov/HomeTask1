#include <iostream>

using namespace std;

int main()
{
	int Year = 0;

	cin >> Year;

	for (int i = ++Year; true; i++)
	{
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = (i / 100) % 10;
		int d = (i / 1000) % 10;

		bool IsUnic1digit = (a != b && a != c && a != d);
		bool IsUnic2digit = (b != c && b != d);
		bool IsUnic3digit = (c != d);

		if (IsUnic1digit && IsUnic2digit && IsUnic3digit)
		{
			cout << i << endl;
			break;
		}
	}
}