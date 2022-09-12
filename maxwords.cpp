//QUE 2114
class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {

        int maxi = 0;
        for (auto &s : sentences)
        {
            int t = 1;
            for (auto &c : s)
                if (c == ' ')
                    t++;
            maxi = max(maxi, t);
        }
        return maxi;
    }
};
