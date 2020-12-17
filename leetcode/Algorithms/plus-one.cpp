class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        // no move up
        if (digits[digits.size() - 1] != 9)
        {
            digits[digits.size() - 1]++;
            return digits;
        }

        // move up
        vector<int> v;
        for (int i = digits.size() - 1; i >= 0 && digits[i] == 9; i--)
        {
            v.push_back(0);
        }

        if (v.size() != digits.size())
        {
            v.push_back(++digits[digits.size() - (v.size() + 1)]);
            for (int i = digits.size() - (v.size() + 1); i >= 0; i--)
            {
                v.push_back(digits[i]);
            }
        }
        else
        {
            // 9, 99, 999, 9999, ...
            v.push_back(1);
        }

        reverse(v.begin(), v.end());
        return v;
    }
};