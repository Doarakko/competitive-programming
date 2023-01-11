#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char *argv[])
{
    string a, b;
    cin >> a >> b;

    double x, y;
    x = stoi(a + b);
    y = sqrt(x);

    if (y == (int)y)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
