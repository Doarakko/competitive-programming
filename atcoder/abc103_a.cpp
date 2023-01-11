#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    vector<int> v(3);
    int x;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        v[i] = x;
    }
    int sum = 0;
    sort(v.begin(), v.end());
    sum = abs(v[2] - v[1]) + abs(v[1] - v[0]);
    cout << sum << endl;
    return 0;
}
