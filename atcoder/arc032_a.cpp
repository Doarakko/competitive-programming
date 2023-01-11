#include <iostream>

using namespace std;
using ll = long long;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, const char *argv[])
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    if (isPrime(sum))
    {
        cout << "WANWAN" << endl;
    }
    else
    {
        cout << "BOWWOW" << endl;
    }
}
