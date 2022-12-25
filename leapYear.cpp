#include <iostream>

using namespace std;

int main()
{
    int year = 0;
    cin >> year;

    if (year % 4 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return EXIT_SUCCESS;
}