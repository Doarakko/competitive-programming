#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    string s, a, b;
    cin >> s;
    a = s.substr(0, 2);
    b = s.substr(2, 2);

    int y, m;
    y = stoi(a);
    m = stoi(b);
    // cout << y << " " << m << endl;
    if (y >= 1 && y <= 12 && m >= 1 && m <= 12)
    {
        cout << "AMBIGUOUS" << endl;
    }
    else if (y >= 1 && y <= 12)
    {
        cout << "MMYY" << endl;
    }
    else if (m >= 1 && m <= 12)
    {
        cout << "YYMM" << endl;
    }
    else
    {
        cout << "NA" << endl;
    }
}
