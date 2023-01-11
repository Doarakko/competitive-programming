#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int x;
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        v[i] = x;
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    while (!(v[0] == v[1] && v[0] == v[2]))
    {
        if (v[2] != v[1] && v[2] != v[0])
        {
            v[1]++;
            v[0]++;
            cnt++;
        }
        else if (v[2] == v[1] && v[2] != v[0])
        {
            v[0]++;
            v[0]++;
            cnt++;
        }
        sort(v.begin(), v.end());
    }
    cout << cnt << endl;
    return 0;
}
