#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int m, n;
    cin >> m >> n;
    cout << m - floor(m / n) * (n - 1) << endl;
}
