#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{
    char c, d;
    int a, b;
    cin >> c >> a >> d >> b;
    if (c == d)
    {
        cout << abs(a - b) / 15 << endl;
    }
    else
    {
        cout << (a + b) / 15 << endl;
    }
}
