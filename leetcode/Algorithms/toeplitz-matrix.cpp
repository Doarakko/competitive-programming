class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        int x, y, key;
        for (int i = 0; i < matrix[0].size(); i++)
        {
            x = i;
            y = 0;
            key = matrix[y][x];
            while (x < matrix[0].size() && y < matrix.size())
            {
                if (key != matrix[y][x])
                {
                    return false;
                }
                x++;
                y++;
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            x = 0;
            y = i;
            key = matrix[y][x];
            while (x < matrix[0].size() && y < matrix.size())
            {
                if (key != matrix[y][x])
                {
                    return false;
                }
                x++;
                y++;
            }
        }

        return true;
    }
};

class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 1; j < matrix[0].size(); j++)
            {
                if (matrix[i - 1][j - 1] != matrix[i][j])
                {
                    return false;
                }
            }
        }

        return true;
    }
};