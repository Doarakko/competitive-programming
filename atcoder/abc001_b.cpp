#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    double km = m / 1000.0;
    string s;
    if (km < 0.1)
    {
        s = "00";
    }
    else if (km <= 5)
    {
        s = to_string((int)(km * 10));
        if (s.length() == 1)
        {
            s = '0' + s;
        }
    }
    else if (km <= 30)
    {
        s = to_string((int)(km + 50));
    }
    else if (km <= 70)
    {
        s = to_string((int)((km - 30) / 5 + 80));
    }
    else
    {
        s = "89";
    }
    cout << s << endl;
}