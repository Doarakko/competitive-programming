#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, n;
    cin >> a >> b >> n;
    for (int i = n;; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i << endl;
            break;
        }
    }
}
