#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    double sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i * 10000.0 / n;
    }
    cout << (int)sum << endl;
    return 0;
}
