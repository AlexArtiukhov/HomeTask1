#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double rslt = sqrt(5);

	for (int i = 10; i < 95; i += 5)
	{
		rslt = rslt * sqrt(i);
	}

	cout << rslt;
}