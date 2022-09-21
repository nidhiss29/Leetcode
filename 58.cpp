class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        int count = 0;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (s[i] == ' ' && count != 0)
                break; // last se dekho jab tak value count++ and as soon as space encounter break and if first space encounter keep on traversing till word comes
            if (s[i] != ' ')
                ++count;
        }
        return count;
    }
};