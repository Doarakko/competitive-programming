#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    for (int i = 0; i + 2 < s.length(); i++)
    {
        if (s.substr(i, 3) == "ABC")
        {
            cnt++;
            i += 2;
        }
    }
    cout << cnt << endl;
}