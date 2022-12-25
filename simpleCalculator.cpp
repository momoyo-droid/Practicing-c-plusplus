#include <iostream>

using namespace std;

void calculator(double a, char op, double b)
{
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << (a / b) * 100;
        break;
    }
}

int main()
{
    char op;
    double a, b = 0.0;

    cin >> a;
    cin >> op;
    cin >> b;

    calculator(a, op, b);

    return EXIT_SUCCESS;
}