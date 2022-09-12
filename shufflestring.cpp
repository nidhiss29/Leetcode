//QUE 1528
class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string final = "";
        int len = indices.size();
        vector<char> strhi(len, 0);
        for (int i = 0; i < len; i++)
        {
            strhi[indices[i]] = s[i];
        }
        for (int i = 0; i < strhi.size(); i++)
        {
            final += strhi[i];
        }
        return final;
    }
};
