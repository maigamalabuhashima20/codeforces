#include <iostream>
using namespace std;
int main()
{
    long n, m, k, counter = 0;
    cin >> n >> m >> k;
    if (n == 0)
        cout << "0";
    else if (n == 1)
        cout << "1";
    else
    {
        counter += m;
        n -= m;
        k -= m;
        counter += n / 2;
        cout << counter;
    }

    return 0;
}
