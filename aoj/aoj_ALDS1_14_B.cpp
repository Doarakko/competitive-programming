#include <iostream>

using namespace std;

int main()
{
    string t, p;
    cin >> t >> p;

    if (t.size() < p.size())
    {
        return 0;
    }

    for (int i = 0; i + p.length() <= t.length(); i++)
    {
        if (t.substr(i, p.length()) == p)
        {
            cout << i << endl;
        }
    }
}