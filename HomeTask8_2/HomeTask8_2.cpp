#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	string mantions;
	int sum = 0;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> mantions;
		
		if (mantions[0] + mantions[2] + mantions[4] > 1)
		{
			sum += 1;
		}
	}
	cout << mantions;
}