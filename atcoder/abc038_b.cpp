#include <iostream>

#define X first
#define Y second

using namespace std;

int main(int argc, const char *argv[])
{
    pair<int, int> p1, p2;
    cin >> p1.X >> p1.Y >> p2.X >> p2.Y;
    if (p1.X == p2.X || p1.X == p2.Y || p1.Y == p2.X || p1.Y == p2.Y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
