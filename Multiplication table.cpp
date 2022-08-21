#include <iostream>
using namespace std;

int main()
{
    short N, pos = 1;
    cin >> N;
    while (pos <= 12)
    {
        cout << N << " * " << pos << " = " << N * pos << "\n";
        pos++;
    }
    return 0;
}