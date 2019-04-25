class Solution
{
public:
    bool isUgly(int num)
    {
        if (num == 0)
        {
            return false;
        }

        vector<int> v = {2, 3, 5};
        for (int i = 0; i < v.size(); i++)
        {
            for (; num % v[i] == 0;)
            {
                num /= v[i];
            }
        }
        return num == 1;
    }
};