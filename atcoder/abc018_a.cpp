#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << '1' << endl;
    }
    else if (a > b && a < c || a < b && a > c)
    {
        cout << '2' << endl;
    }
    else
    {
        cout << '3' << endl;
    }
    if (b > a && b > c)
    {
        cout << '1' << endl;
    }
    else if (b > a && b < c || b < a && b > c)
    {
        cout << '2' << endl;
    }
    else
    {
        cout << '3' << endl;
    }
    if (c > a && c > b)
    {
        cout << '1' << endl;
    }
    else if (c > a && c < b || c < a && c > b)
    {
        cout << '2' << endl;
    }
    else
    {
        cout << '3' << endl;
    }
    return 0;
}
