#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int y;
    cin >> y;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
