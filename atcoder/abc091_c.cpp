#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int N;
    cin >> N;
    vector<pair<int, int>> r(N), b(N);
    int x, y;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        r[i].first = x;
        r[i].second = y;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        b[i].first = x;
        b[i].second = y;
    }
    sort(r.begin(), r.end());
    sort(b.begin(), b.end());
    int cnt = 0, tmp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (b[j].first != -1)
            {
                if (r[i].first <= b[j].first && r[i].second <= b[j].second)
                {
                    cout << r[i].first << b[j].first << r[i].second << b[j].second << endl;
                    r[i].first = b[j].first = r[i].second = b[j].second = -1;
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
