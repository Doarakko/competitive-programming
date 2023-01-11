#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;

    if (abs(a) > abs(b))
    {
        cout << "Bug" << endl;
    }
    else if (abs(a) < abs(b))
    {
        cout << "Ant" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}
