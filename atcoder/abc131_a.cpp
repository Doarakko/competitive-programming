#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cout << "Bad" << endl;
            return 0;
        }
    }
    cout << "Good" << endl;
}
