#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sum = 2025;
    cin >> n;
    int x = sum - n;
    for (int i = 1; i <= min(x, 9); i++)
    {
        if (x % i == 0 && x / i <= 9)
        {
            cout << i << " x " << x / i << endl;
        }
    }
}