#include <iostream>
// #include <string>
// #include <climits>

using namespace std;

int main()
{
    string studentName;
    cin >> studentName;

    double grade;
    cin >> grade;

    int year = 1;
    double avrGrade = 0.0;
    double sumGrades = 0.0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (grade >= 4.00)
    {
        sumGrades += grade;

        if (year == 12)
        {
            avrGrade = sumGrades / year;
            cout << studentName << " graduated. Average grade: " << avrGrade << endl;
            
            return 0;
        }

        year++;
        cin >> grade;
    }

    cout << studentName << " has been excluded at " << year << " grade" << endl;

    return 0;
}