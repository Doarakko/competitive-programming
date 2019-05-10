class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int cnt = 1, val = nums[0];
        for (int i = 1; i < nums.size() && cnt <= nums.size() / 2; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
                val = nums[i];
            }
        }
        return val;
    }
};