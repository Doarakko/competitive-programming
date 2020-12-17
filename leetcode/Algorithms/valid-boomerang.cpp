class Solution
{
public:
    bool isBoomerang(vector<vector<int>> &points)
    {
        set<pair<int, int>> st;
        pair<int, int> p;
        for (int i = 0; i < points.size(); i++)
        {
            p.first = points[i][0];
            p.second = points[i][1];
            st.insert(p);
        }
        if (st.size() <= 2)
        {
            cout << "a" << endl;
            return false;
        }

        double a, b;
        if (points[0][0] - points[1][0] == 0)
        {
            return points[2][0] != points[0][0];
        }
        a = 1.0 * (points[0][0] - points[1][0]) / (points[0][1] - points[1][1]);

        if (points[0][1] - points[1][1] == 0)
        {
            return points[2][1] != points[0][1];
        }
        b = points[0][0] - a * points[0][1];
        // cout << a << " " << b << endl;

        return points[2][0] != a * points[2][1] + b;
    }
};