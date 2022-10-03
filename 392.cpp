class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = s.length(), m = t.length();
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (s[i] == t[j])
                i++; // incre,ent fr next comparison
            j++;     // move ahead in t only as no match
        }
        if (i == n)
            return true;

        return false;
        // or one logic in for loop for t check compatison and count++ if count == size of s then true
    }
};