class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string ans = "";
        int c = 0;

        for (auto x : s)
        {
            if (x == ' ')
                c++; // we are counting spaces for k as 4 space means 4 values
            if (c == k)
                break;
            ans += x;
        }

        return ans;
    }
};