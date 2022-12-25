#include <iostream>

using namespace std;
const int MAXVSIZE = 3;

int *dataV()
{
    static int v[MAXVSIZE] = {};

    for (int i = 0; i < MAXVSIZE; i++)
    {
        cin >> v[i];
    }

    return v;
}

int main()
{
    int *v = NULL;
    int g, l = 0;

    v = dataV();
    g = v[0];

    for (int i = 0; i < MAXVSIZE; i++)
    {
        if(g > )
    }

    return EXIT_SUCCESS;
}