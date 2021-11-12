#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 5  == 0 &&
			i % 3  == 0 &&
			i % 11 != 0)
		{
			cout << i << endl;
		}
	}
}