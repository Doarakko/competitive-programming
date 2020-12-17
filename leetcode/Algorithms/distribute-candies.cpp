class Solution
{
public:
    int distributeCandies(vector<int> &candies)
    {
        set<int> st;
        for (int i = 0; i < candies.size(); i++)
        {
            st.insert(candies[i]);
        }

        return min(st.size(), candies.size() / 2);
    }
};

class Solution
{
public:
    int distributeCandies(vector<int> &candies)
    {
        sort(candies.begin(), candies.end());
        int cnt = 1;
        for (int i = 1; i < candies.size() && cnt < candies.size() / 2; i++)
        {
            if (candies[i] > candies[i - 1])
            {
                cnt++;
            }
        }
        return cnt;
    }
};