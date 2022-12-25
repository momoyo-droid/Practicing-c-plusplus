#include <iostream>

using namespace std;

int main()
{
    char letter;

    cin >> letter;

    letter = toupper(letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' 
        || letter == 'O' || letter == 'U')
    {
        printf("%c is a vowel", letter);
    }
    else
    {
        printf("%c is a consonant.", letter);
    }

    return EXIT_SUCCESS;
}