#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    int h, m, s;
    // hour
    h = n / (60 * 60);
    n -= h * (60 * 60);
    // minute
    m = n / 60;
    n -= m * 60;
    // seconds
    s = n;

    if (h < 10)
    {
        cout << "0" << h << ":";
    }
    else
    {
        cout << h << ":";
    }

    if (m < 10)
    {
        cout << "0" << m << ":";
    }
    else
    {
        cout << m << ":";
    }

    if (s < 10)
    {
        cout << "0" << s << endl;
    }
    else
    {
        cout << s << endl;
    }
}
