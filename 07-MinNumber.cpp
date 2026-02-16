#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    string command;
    cin >> command;

    int minNum = INT_MAX;

    while (command != "Stop")
    {
        int number = stoi(command);

        if (number < minNum)
        {
            minNum = number;
        }

        cin >> command;
    }

    cout << minNum << endl;

    return 0;
}