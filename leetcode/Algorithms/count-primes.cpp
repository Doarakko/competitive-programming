class Solution
{
public:
    int countPrimes(int n)
    {
        if (n == 0)
        {
            return 0;
        }

        // Sieve of Eratosthenes
        vector<bool> v(n, true);
        v[0] = false;

        for (int i = 1; i + 1 < sqrt(n); i++)
        {
            for (int j = i + (i + 1); j < n; j += (i + 1))
            {
                v[j] = false;
            }
        }

        // count
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};