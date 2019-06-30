class Solution
{
public:
    int binaryToDecimal(string s)
    {
        reverse(s.begin(), s.end());
        int x = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                x += pow(2, i);
            }
        }
        return x;
    }

    string decimalToReverseBinary(int x)
    {
        string s = "";
        while (x > 0)
        {
            s += to_string(abs(x % 2 - 1));
            x /= 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }

    int findComplement(int num)
    {
        return binaryToDecimal(decimalToReverseBinary(num));
    }
};
