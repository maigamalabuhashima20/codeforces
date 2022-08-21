#include <iostream>
using namespace std;
int main()
{
    int n, a, b, sum = 0, t = 0, r = 0;
    cin >> n >> a >> b;
    for (int i = a; i <= n; i++)
    {
        if (i < 10 && i <= b)
            sum += i;
        else if (i >= 10)
        {
            int current = i, sumdigit = 0;
            while (current)
            {
                t = current % 10;
                sumdigit += t;
                current /= 10;
            }

            if (sumdigit >= a && sumdigit <= b)
                sum += i;
        }
    }
    cout << sum;
    return 0;
}
