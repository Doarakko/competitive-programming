#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int r;
    cin >> r;
    if (r < 1200)
    {
        cout << "ABC" << endl;
    }
    else if (r < 2800)
    {
        cout << "ARC" << endl;
    }
    else
    {
        cout << "AGC" << endl;
    }
    return 0;
}
