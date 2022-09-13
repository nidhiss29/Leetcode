class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int len = items.size();
        int i;
        int finala = 0;
        if (ruleKey == "type")
            i = 0;
        if (ruleKey == "color")
            i = 1;
        if (ruleKey == "name")
            i = 2;

        for (int j = 0; j < len; j++)
        {
            if (items[j][i] == ruleValue)
                finala++;
        }
        return finala;
    }
};