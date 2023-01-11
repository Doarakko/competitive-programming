#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    vector<string> v = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for (int i = 0; i < 5; i++)
    {
        if (s == v[i])
        {
            cout << 5 - i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}
