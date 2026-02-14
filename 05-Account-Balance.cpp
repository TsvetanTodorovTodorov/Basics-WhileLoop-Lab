#include <iostream>
using namespace std;

int main()
{
    string command;
    cin >> command;

    double sum = 0.0;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    while (command != "NoMoreMoney") {
        double money = stod(command);
        if (money < 0)
        {
            cout << "Invalid operation!" << endl;
            break;
        }
        sum += money;
        cout << "Increase: " << money << endl;

        cin >> command;

    }

    cout << "Total: " << sum << endl;

    return 0;
}