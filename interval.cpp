#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    short a, b;
    cin >> a >> b;
    if(abs(a - b) <= 1 && a != 0 && b != 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
