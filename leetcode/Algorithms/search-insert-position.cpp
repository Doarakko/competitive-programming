class Solution
{
public:
    int binarySearch(vector<int> v, int target)
    {
        int left = -1;
        int right = v.size();

        while (right - left > 1)
        {
            int mid = left + (right - left) / 2;

            if (v[mid] >= target)
            {
                right = mid;
            }
            else
            {
                left = mid;
            }
        }

        return right;
    }

    int searchInsert(vector<int> &nums, int target)
    {
        int x = binarySearch(nums, target);
        return x;
    }
};