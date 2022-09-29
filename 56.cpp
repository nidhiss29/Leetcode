class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        // to check second element in [] use [j][1] 2d vector for first element [j][0]

        vector<vector<int>> ans;
        if (intervals.size() == 0)
            return ans;

        sort(intervals.begin(), intervals.end()); // taki adjacent hi compare ki zrurat ho not whole as pass ki value aage peeche hi hongi
        int j = 0;                                // compare element in new array

        ans.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++)
        { // second element compare to first one 1st in new
            if (ans[j][1] >= intervals[i][0])
                ans[j][1] = max(ans[j][1], intervals[i][1]);
            else
            {

                ans.push_back(intervals[i]);
                j++;
            }
        }

        return ans;
    }
};