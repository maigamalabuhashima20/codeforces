#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    const double pi = 3.141592653;
    double r , area;
    cin>>r;
    area = pi * pow(r,2);
    cout<<fixed <<setprecision(9)<< area;
    return 0;
}