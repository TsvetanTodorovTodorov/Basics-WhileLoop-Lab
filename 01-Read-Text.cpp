#include <iostream>
using namespace std;

int main()
{
    while (true) {
        string text;
        cin >> text;

        if (text == "Stop")
        {
            break;
        }

        cout << text << endl;
    }

    return 0;
}