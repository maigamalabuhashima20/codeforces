#include <iostream>
using namespace std;
int main()
{
    short num;
    cin >> num;
    for (short i = 2; i <= num; i++)
    {
        bool count = 1;
        for (short j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count = 0;
                break;
            }
        }
        if (count == 1)
            cout << i << " ";
    }
    return 0;
}