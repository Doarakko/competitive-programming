#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    vector<int> v(3);
    int x, k;

    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        v[i] = x;
    }
    cin >> k;
    sort(v.begin(), v.end());
    int max;
    max = v[2];
    for (int i = 0; i < k; i++)
    {
        max *= 2;
    }
    cout << v[0] + v[1] + +max << endl;
    return 0;
}
