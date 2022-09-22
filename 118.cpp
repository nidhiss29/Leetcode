class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> rows(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                rows[j] = ans[i - 1][j] + ans[i - 1][j - 1];
            }
            ans.push_back(rows); // approach row ka length i+1 because first row me 0 me 1 element nd 1 me 2
        }
        return ans;
    }
};

// striver https://www.youtube.com/watch?v=6FLvhQjZqvM