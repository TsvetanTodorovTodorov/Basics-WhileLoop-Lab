#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    string command;
    cin >> command;

    int maxNum = INT_MIN;

    while (command != "Stop")
    {
        int number = stoi(command);

        if (number > maxNum)
        {
            maxNum = number;
        }

        cin >> command;
    }

    cout << maxNum << endl;

    return 0;
}