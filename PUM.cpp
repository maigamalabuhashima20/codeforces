#include <iostream>
using namespace std;
int main()
{
    short n;
    cin >> n;
    for (short i = 1; i < n * 4; i += 4)
    {
        cout << i << " " << i + 1 << " " << i + 2 << " "
             << "PUM\n";
    }
    return 0;
}
