#include <iostream>
using namespace std;
int main()
{
    int d, years = 0, month = 0, day = 0;
    cin >> d;
    years = d / 365;
    month = (d % 365) / 30;
    day = (d % 365) % 30;
    cout << years << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;
    return 0;
}