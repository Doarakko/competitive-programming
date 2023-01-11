#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

#define vsort(v) sort((v).begin(), (v).end())

using namespace std;
int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<double> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vsort(v);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        s[i] = v[i] * v[i] * M_PI;
        if (n % 2 == 0)
        {
            if (i % 2 != 0)
            {
                sum += s[i] - s[i - 1];
            }
        }
        else
        {
            if (i == 0)
            {
                sum += s[i];
            }
            else if (i % 2 == 0)
            {
                sum += s[i] - s[i - 1];
            }
        }
    }
    printf("%f", sum);
    // cout << sum << endl;
}
