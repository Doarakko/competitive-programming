#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, k;
    string s;
    cin >> n >> s >> k;

    char c = s[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (s[i] != c)
        {
            s[i] = '*';
        }
    }
    cout << s << endl;
}
