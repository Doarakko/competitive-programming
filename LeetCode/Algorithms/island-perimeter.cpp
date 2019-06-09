class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int sum = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 0)
                {
                    continue;
                }

                // top
                if (i > 0 && grid[i - 1][j] == 0)
                {
                    sum++;
                }
                else if (i == 0)
                {
                    sum++;
                }

                // bottom
                if (i < grid.size() - 1 && grid[i + 1][j] == 0)
                {
                    sum++;
                }
                else if (i == grid.size() - 1)
                {
                    sum++;
                }

                // left
                if (j > 0 && grid[i][j - 1] == 0)
                {
                    sum++;
                }
                else if (j == 0)
                {
                    sum++;
                }

                // right
                if (j < grid[i].size() - 1 && grid[i][j + 1] == 0)
                {
                    sum++;
                }
                else if (j == grid[i].size() - 1)
                {
                    sum++;
                }

                //cout << i << " " << j << " " << sum << endl;
            }
        }
        return sum;
    }
};
