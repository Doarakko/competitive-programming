#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int r, d, x, pre;
    cin >> r >> d >> x;
    for (int i = 0; i < 10; i++)
    {
        x = r * x - d;
        cout << x << endl;
    }
}
