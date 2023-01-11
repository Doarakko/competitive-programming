#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {

        sum += v[i];
        if (i > 2)
        {
            sum -= v[i - 3];
        }

        if (i >= 2 && sum < k)
        {

            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}
