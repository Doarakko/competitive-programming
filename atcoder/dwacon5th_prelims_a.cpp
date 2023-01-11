#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    double sum = 0, avg;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    avg = sum / n;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(v[i] - avg) < abs(v[ans] - avg))
        {
            ans = i;
        }
    }
    cout << ans << endl;
}
