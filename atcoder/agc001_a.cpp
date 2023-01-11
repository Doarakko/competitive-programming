#include <iostream>
#include <vector>
#define vsort(v) sort(v.begin(), v.end())

using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n * 2);
    for (int i = 0; i < n * 2; i++)
    {
        cin >> v[i];
    }
    vsort(v);

    int sum = 0;
    for (int i = 0; i + 1 < 2 * n; i += 2)
    {
        sum += min(v[i], v[i + 1]);
    }
    cout << sum << endl;
}
