class Solution
{
public:
    bool isPowerOfFour(int num)
    {
        if (num == 0)
        {
            return false;
        }

        for (; num % 4 == 0;)
        {
            num /= 4;
        }

        return num == 1;
    }
};