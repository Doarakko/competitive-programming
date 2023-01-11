#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, x, cnt = 0;
    cin >> n;
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            sum += x;
            cnt++;
        }
    }
    cout << ceil(sum / cnt) << endl;
}
