#include <iostream>
using namespace std;
int main()
{
	long a , b ,c , d1 , d2, d3, d4;
    cin >> a >> b >> c;
    d1 = a*2 + b*2;
    d2 = a*2 + c*2;
    d3 = b*2 + c*2;
    d4 = a + b + c;
    cout<<min(d1 , min(d2 , min(d3 , d4)));
	return 0;
}
