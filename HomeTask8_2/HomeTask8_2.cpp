#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int mantion1;
	int mantion2;
	int mantion3;
	int sum = 0;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> mantion1 >> mantion2 >> mantion3;
		
		if (mantion1 + mantion2 + mantion3 > 1)
		{
			sum += 1;
		}
	}
	cout << sum;
}