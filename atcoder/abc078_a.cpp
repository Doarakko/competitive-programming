#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    char x, y;
    cin >> x >> y;
    if (x > y)
    {
        cout << '>' << endl;
    }
    else if (x < y)
    {
        cout << '<' << endl;
    }
    else
    {
        cout << '=' << endl;
    }
    return 0;
}
