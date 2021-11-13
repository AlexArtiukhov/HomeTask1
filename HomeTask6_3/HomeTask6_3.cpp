#include <iostream>

using namespace std;

void main()
{
	int xy = 10;
	int r = 8;

	for (int y = -xy; y < xy; y++)
	{
		for (int x = -xy; x < xy; x++)
		{
			if (r < sqrt((y * y) + (x * x)))
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}

		cout << endl;
	}
}