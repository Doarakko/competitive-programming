#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>
#include <bitset>
using namespace std;

int main(int argc, const char *argv[])
{
    int n, x;
    cin >> n;

    double sum, max = -1;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> x;

            if (j != 4)
            {
                sum += x;
            }
            else
            {
                sum += x * 110 / 900.0;
            }
        }

        if (sum > max)
        {
            max = sum;
        }
    }
    cout << setprecision(4) << max << endl;
}
