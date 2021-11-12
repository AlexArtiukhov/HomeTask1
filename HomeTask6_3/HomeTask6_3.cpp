#include <iostream>

using namespace std;

void main()
{
	int xy = 20;

	for (int y = 0; y < xy; y++)
	{
		for (int x = 0; x < xy; x++)
		{ 
			if (abs(x)==xy/2 || abs(y)==xy/2)
			cout << " *";
		}

		cout << endl;
	}
}