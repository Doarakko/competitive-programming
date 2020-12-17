class Solution
{
  public:
    int fib(int N)
    {
        int a[31];
        a[0] = 0;
        a[1] = 1;

        for (int i = 2; i <= N; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        return a[N];
    }
};