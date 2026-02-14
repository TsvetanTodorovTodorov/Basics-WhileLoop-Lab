#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int number = 1;

    while (number <= n)
    {
        cout << number << endl;
        number += number + 1;
    }

    return 0;
}