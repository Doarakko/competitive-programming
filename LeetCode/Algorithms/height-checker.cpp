class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> v(heights.size());
        for (int i = 0; i < heights.size(); i++)
        {
            v[i] = heights[i];
        }
        sort(v.begin(), v.end());

        int cnt = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            //cout << heights[i] << " " << v[i] << endl;
            if (heights[i] != v[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};
