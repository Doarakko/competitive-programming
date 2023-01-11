#include <iostream>

using namespace std;

void solve(int n, string s)
{
    if (n == 0)
    {
        cout << s << endl;
    }
    else
    {
        char c[3] = {'a', 'b', 'c'};
        for (int i = 0; i < 3; i++)
        {
            solve(n - 1, s + c[i]);
        }
    }
}

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    solve(n, "");
}
