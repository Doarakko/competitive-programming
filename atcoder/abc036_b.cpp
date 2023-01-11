#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    string s;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v[i] = s;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << v[j][i];
        }
        cout << endl;
    }

    return 0;
}
