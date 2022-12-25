#include <iostream>

using namespace std;

int main()
{
    int i, j = 0;

    cin >> i;
    cin >> j;

    if (i > j)
    {
        cout << i << " is greater than " << j << endl;
    }
    else if (i == j)
    {
        cout << i << " is equal to " << j << endl;
    }
    else
    {
        cout << j << " is greater than " << i << endl;
    }

    return EXIT_SUCCESS;
}