#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (a > b)
        {
            int tmp = b;
            for (int i = 2; a < tmp; i++)
            {
                tmp = b * i;
            }
            cout << tmp - a << endl;
        }
        else
        {
            cout << b - a << endl;
        }
    }
}
