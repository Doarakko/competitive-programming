#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool flag = false;
    if (abs(a - c) <= d)
    {
        flag = true;
    }
    else if (abs(a - b) <= d && abs(b - c) <= d)
    {
        flag = true;
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
