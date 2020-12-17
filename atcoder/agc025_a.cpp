#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    if (n % 10 == 0)
    {
        cout << 10 << endl;
    }
    else
    {
        string s = to_string(n);
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += s[i] - '0';
        }
        cout << sum << endl;
    }
}
