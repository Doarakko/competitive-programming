#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    int min_abs = 1000000000;
    int tmp = 0;
    for (int i = 0; i < s.length() - 2; i++)
    {
        tmp = abs(stoi(s.substr(i, 3)) - 753);
        if (tmp < min_abs)
        {
            min_abs = tmp;
        }
    }
    cout << min_abs << endl;
}
