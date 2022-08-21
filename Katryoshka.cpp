#include <iostream>
using namespace std;
int main()
{
    long long n, m, k, counter = 0, check;
    cin >> n >> m >> k;
    if (n == 0)
        cout << "0";
    else if (n == 1)
        cout << "1";
    else
    {
        check = min(n, min(m, k));
        counter += check;
        n -= check;
        m -= check;
        k -= check;
        n /= 2;
        check = min(n, k);
        counter += check;
        cout << counter;
    }

    return 0;
}
