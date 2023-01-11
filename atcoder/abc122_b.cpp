#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    int cnt = 0, max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
        {
            cnt = 1;
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[j] == 'A' || s[j] == 'C' || s[j] == 'G' || s[j] == 'T')
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            if (cnt > max)
            {
                max = cnt;
            }
        }
    }
    cout << max << endl;
}
