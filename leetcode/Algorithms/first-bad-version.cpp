// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long long left = -1;
        long long right = n;
        long long mid;

        while (right - left > 1)
        {
            mid = left + (right - left) / 2;

            if (isBadVersion(mid) && !isBadVersion(mid - 1))
            {
                return mid;
            }
            else if (isBadVersion(mid))
            {
                right = mid;
            }
            else
            {
                left = mid;
            }
            // cout << mid << endl;
        }
        return mid + 1;
    }
};