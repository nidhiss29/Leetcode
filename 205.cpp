class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int n = s.length();
        // approach is to use 2 ds map and set map to show what is mapped to what and set to hold kya kya map ho gya h so avaoid duplicacy
        int m = t.length();
        map<char, char> mp;
        set<char> x;

        for (int i = 0; i < n; i++)
        {
            if (mp.count(s[i]) == 0 && x.count(t[i]) == 0)
            { // not present in map and set
                mp[s[i]] = t[i];
                x.insert(t[i]);
            }
            else if (mp.count(s[i]) == 0 && x.count(t[i])) // element stack me h yani mapped but not to s[i]
                return false;
            else if (mp[s[i]] != t[i])
                return false;
        }
        return true;
    }
};