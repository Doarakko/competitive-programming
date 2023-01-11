#include <iostream>
#include <map>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;

    int p, ac = 0, wa = 0;
    string s;
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> p >> s;
        if (s == "AC")
        {
            if (mp[p] != -1)
            {
                ac++;
                wa += mp[p];
                mp[p] = -1;
            }
        }
        else
        {
            if (mp[p] != -1)
            {
                mp[p]++;
            }
        }
    }
    cout << ac << ' ' << wa << endl;
}