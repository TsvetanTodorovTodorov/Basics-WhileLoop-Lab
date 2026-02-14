#include <iostream>
using namespace std;

int main()
{
    int goal;
    cin >> goal;
    int num;
    cin >> num;

    int sum = num;

    while (sum < goal)
    {
        cin >> num;
        sum += num;
    }

    cout << sum << endl;

    return 0;
}