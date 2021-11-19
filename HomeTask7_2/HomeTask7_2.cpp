#include <iostream>
#include "HomeTask7_2.h"

using namespace std;

int main()
{
	int a, b;

	a_b_input(a, b);
	summ_output(a, b);
}

void summ_output(int a, int b)
{
	cout << a + b << endl;
}

void a_b_input(int& a, int& b)
{
	cin >> a >> b;
}
