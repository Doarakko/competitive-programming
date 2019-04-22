class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<int> v = {0, nums[nums.size() - 1] + 1};
        int pre = nums[0], idx = 1;
        if (nums[0] != 1)
        {
            v[1] = 1;
        }

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                v[0] = nums[i];
            }
            else if (nums[i] - nums[i - 1] == 2)
            {
                v[1] = nums[i] - 1;
            }
        }
        return v;
    }
};