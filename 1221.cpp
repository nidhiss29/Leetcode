class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int cnr = 0, cnl = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
                cnr += 1;
            else
                cnl += 1;

            if (cnl == cnr)
            {
                count += 1;
                cnr = 0;
                cnl = 0;
            }
        }
        return count;
    }
};