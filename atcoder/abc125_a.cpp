#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, t;
    cin >> a >> b >> t;
    cout << floor((t + 0.5) / a) * b << endl;
}
