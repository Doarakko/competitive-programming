#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << "a > b" << endl;
    }
    else if (a < b)
    {
        cout << "a < b" << endl;
    }
    else
    {
        cout << "a == b" << endl;
    }
}
