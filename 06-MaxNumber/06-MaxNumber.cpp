#include <iostream>
#include <climits>
#include <string>
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



// Напишете програма, която до получаване на командата "Stop",
// чете цели числа, въведени от потребителя и намира най-голямото измежду тях. 
// Въвежда се по едно число на ред.

//100
//99
//80
//70
//Stop