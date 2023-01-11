#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    int sum = 700;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'o')
        {
            sum += 100;
        }
    }
    cout << sum << endl;

    return 0;
}
