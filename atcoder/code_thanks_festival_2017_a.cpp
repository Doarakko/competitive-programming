#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int t, max = -1;
    for (int i = 0; i < 8; i++)
    {
        cin >> t;
        if (t > max)
        {
            max = t;
        }
    }
    cout << max << endl;
}
