#include <iostream>

using namespace std;

int main()
{
	const int elementsAmount = 10;
	int arr[elementsAmount];
	int arr2[elementsAmount];
	int Colnum = 0;
	int n;
	bool isUnic = true;

	cin >> n;
	cout << endl;

	srand(time(0));

	for (int i = 0; i < elementsAmount; i++)
	{
		arr[i] = rand() % n;
	}

	for (int i = 0; i < elementsAmount; i++)
	{
		cout << arr[i] << endl;
	}

	cout << endl;

	for (int j = 0; j < elementsAmount; j++)
	{
		for (int y = j + 1; y < elementsAmount; y++)
		{
			if (arr[j] == arr[y])
			{
				Colnum++;
				arr2[j] = arr[j];
			}
		}

		for (int p = 0; p < j; p++)
		{
			if (arr[j] == arr2[p])
			{
				isUnic = false;
			}
		}

		if (Colnum != 0 && isUnic)
		{
			cout << arr[j] << " - " << Colnum + 1 << endl;
		}
		Colnum = 0;
		isUnic = true;
	}
}