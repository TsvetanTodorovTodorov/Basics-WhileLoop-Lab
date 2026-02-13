#include <iostream>
using namespace std;

int main()
{
    string name, pass;
    cin >> name >> pass;

    while (true)
    {
        string trial;
        cin >> trial;

        if (trial == pass)
        {
            cout << "Welcome " << name << "!" << endl;
            break;
        }

        
    }

    return 0;
}