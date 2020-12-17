class Solution
{
  public:
    int hammingDistance(int x, int y)
    {
        string x_s = bitset<32>(x).to_string();
        string y_s = bitset<32>(y).to_string();

        int cnt = 0;
        for (int i = 0; i < 32; i++)
        {
            if (x_s[i] != y_s[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};