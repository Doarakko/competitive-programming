class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {
        if (deck.size() < 2)
        {
            return false;
        }

        sort(deck.begin(), deck.end());

        int x = -1, cnt = 1;
        for (int i = 0; i < deck.size() - 1; i++)
        {
            if (deck[i] == deck[i + 1])
            {
                cnt++;

                // last
                if (i == deck.size() - 2)
                {
                    x = gcd(x, cnt);
                }
            }
            else if (x == -1)
            {
                x = cnt;
                cnt = 1;
            }
            else
            {
                x = gcd(x, cnt);
                cnt = 1;
            }

            // cout << i << " " << x << endl;
            if (x >= 0 && x < 2)
            {
                return false;
            }
        }
        return true;
    }

    int gcd(int x, int y)
    {
        int r;

        // 引数チェック
        if (x == 0 || y == 0)
        {
            return 0;
        }

        // ユーグリッドの互除法
        // yで割り切れるまでループ
        while ((r = x % y) != 0)
        {
            x = y;
            y = r;
        }
        return y;
    }
};