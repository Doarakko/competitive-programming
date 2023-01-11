#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, L, R;

    cin >> n >> L >> R;

    vector<int> v(n);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] < L)
        {
            cout << L;
        }
        else if (v[i] > R)
        {
            cout << R;
        }
        else
        {
            cout << v[i];
        }
        if (i != n - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}
