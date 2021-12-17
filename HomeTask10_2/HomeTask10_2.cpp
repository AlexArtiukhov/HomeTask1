#include <iostream>

using namespace std;

void find(int n, int div)
{
    if (n == 1)
    {
        return;
    }

    if (n % div == 0)
    {
        cout << " " << div;
        find(n / div, div);
    }
    else
    {
        if (div == 2)
        {
            find(n, div + 1);
        }
        else
        {
            find(n, div + 2);
        }
    }
}
int main()
{
    int n, div = 2;
    cin >> n;
    cout << n;
    find(n, 2);
    cin.get(); cin.get();
    return 0;
}