class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // transpose then either row reverse or swap columns last to first nd then inner ones
        // easier is to revserse row
        // brute not allowed else new matrix row updation as column
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < i; j++) // inplace
                swap(matrix[i][j], matrix[j][i]);
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};