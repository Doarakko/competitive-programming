// O(n)
class Solution
{
public:
    int fixedPoint(vector<int> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            if (i == A[i])
            {
                return i;
            }
        }
        return -1;
    }
};

// O(logn)
class Solution
{
public:
    int fixedPoint(vector<int> &A)
    {
        int left = -1;
        int right = A.size();

        while (right - left > 1)
        {
            int mid = left + (right - left) / 2;

            if (A[mid] - mid > 0)
            {
                right = mid;
            }
            else if (A[mid] - mid < 0)
            {
                left = mid;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};