#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", n, i, n * i);
    }

    return 0;
}