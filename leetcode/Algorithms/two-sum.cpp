class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v(2);
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = i + 1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp[target - nums[i]] && i != mp[target - nums[i]] - 1)
            {
                v[0] = i;
                v[1] = mp[target - nums[i]] - 1;
                return v;
            }
        }
        return v;
    }
};