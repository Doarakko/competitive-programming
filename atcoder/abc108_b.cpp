#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, x4, y3, y4;
    int dx = x2 - x1;
    int dy = y2 - y1;
    x3 = x2 - dy;
    y3 = y2 + dx;
    x4 = x3 - dx;
    y4 = y3 - dy;
    cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4 << ' ' << endl;
}
