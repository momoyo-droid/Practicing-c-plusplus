#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, n4 = 0;

    cin >> n1 >> n2 >> n3 >> n4;

    printf("Your average is %.1f\n", (n1+n2+n3+n4)/4);
    
    return EXIT_SUCCESS;
}