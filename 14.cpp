class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // three approaches 1. ya to main phle string ko char by char compare with other strings    2. sort aray to sabse zyda difference wala last me chala jayega then we need to compare only first and last one out of sorted kuki agr sort flower flow flight then sortde would be flight flow and flower compare char by char flight and flower ans fl  3. trie where i update trie with array and see jis jiska child count 1 h use add else not add.

        // 1. approach

        /*         string ans;
        for (int i =0; i < strs[0].size();i++){
                    for(int j =1; j < strs.size() ;j++){
                        if(strs[0][i] != strs[j][i])
                        {  return ans;  }
                    }
                    ans += strs[0][i];
                }
                return ans;   */

        // 2. approach
        int n = strs.size();
        string ans;
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[n - 1];
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
            {
                ans += a[i];
            }
            else
                break;
        }
        return ans;
    }
};
