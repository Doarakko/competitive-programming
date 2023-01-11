#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int h, m;
    cin >> h >> m;
    int x, y;
    x = 18 * 60;
    y = h * 60 + m;
    cout << x - y << endl;
}
