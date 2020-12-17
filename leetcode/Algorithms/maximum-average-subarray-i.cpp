class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double sum = 0, max = 0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        max = sum;

        for (int i = 0; k + i < nums.size(); i++)
        {
            sum += nums[k + i] - nums[i];

            if (sum > max)
            {
                max = sum;
            }
        }
        return max / k;
    }
};