class Solution
{
public:
    int addDigits(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;

            if (num == 0 && sum >= 10)
            {
                num = sum;
                sum = 0;
            }
        }
        return sum;
    }
};

// O(1)
class Solution
{
public:
    int addDigits(int num)
    {
        if (num <= 9)
        {
            return num;
        }

        if (num % 9 == 0)
        {
            return 9;
        }

        return num % 9;
    }
};