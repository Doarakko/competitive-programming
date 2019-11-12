#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n == 2)
    {
        return true;
    }

    if (n < 2 || n % 2 == 0)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(v[i]))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
