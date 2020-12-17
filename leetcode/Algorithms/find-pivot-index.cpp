class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return -1;
        }

        vector<int> v(nums.size());

        v[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            v[i] = v[i - 1] + nums[i];
        }

        int left, right;
        for (int i = 0; i < v.size(); i++)
        {
            left = v[i] - nums[i];
            right = v[nums.size() - 1] - v[i];

            if (left == right)
            {
                return i;
            }
        }
        return -1;
    }
};