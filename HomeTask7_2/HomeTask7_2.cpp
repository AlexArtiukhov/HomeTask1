#include <iostream>
#include "HomeTask7_2.h"

using namespace std;

int main()
{
	int a, b;

	a_b_input(a, b);

	cout << "Summ of your numbers:" << endl;
	cout << a + b << endl;
}

void a_b_input(int& a, int& b)
{
	cout << "Enter numbers:" << endl;
	cin >> a >> b;
}