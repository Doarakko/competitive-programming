class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums.size() < 3)
        {
            return nums[nums.size() - 1];
        }

        int cnt = 1, idx = 0;
        for (int i = nums.size() - 1 - 1; i >= 0 && cnt < 3; i--)
        {
            if (nums[i] != nums[i + 1])
            {
                cnt++;
                idx = i;
            }
        }
        if (cnt != 3)
        {
            return nums[nums.size() - 1];
        }
        return nums[idx];
    }
};
