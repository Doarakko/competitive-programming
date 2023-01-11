#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;
    if (m < n)
    {
        cout << m + 1 << endl;
    }
    else
    {
        cout << m - 1 << endl;
    }
}
