#include <iostream>
using namespace std;
int main()
{
    float x, p;
    cin >> x >> p;
    cout << p / ((100 - x) / 100);
    return 0;
}