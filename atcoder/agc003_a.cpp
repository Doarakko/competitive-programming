#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char *argv[])
{
    string S;
    cin >> S;
    bool n, s, e, w;
    n = s = e = w = false;
    for (int i = 0; i < S.length(); i++)
    {
        switch (S[i])
        {
        case 'N':
            n = true;
            break;
        case 'W':
            w = true;
            break;
        case 'S':
            s = true;
            break;
        case 'E':
            e = true;
            break;
        }
    }

    if (n && s && w && e || !n && !s && !w && !e)
    {
        cout << "Yes" << endl;
    }
    else if (n && s && !w && !e || !n && !s && w && e)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
