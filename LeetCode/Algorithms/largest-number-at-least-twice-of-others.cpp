class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        vector<int> v(nums.size());
        copy(nums.begin(), nums.end(), back_inserter(v));

        sort(v.begin(), v.end());

        if (v[v.size() - 1] >= v[v.size() - 2] * 2)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == v[v.size() - 1])
                {
                    return i;
                }
            }
        }
        return -1;
    }
};