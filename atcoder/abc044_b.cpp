#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string w;
    cin >> w;
    int cnt[26] = {};
    for (int i = 0; i < w.length(); i++)
    {
        cnt[w[i] - 97]++;
    }
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2 != 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
