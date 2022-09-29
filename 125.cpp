class Solution
{
public:
    bool isPalindrome(string s)
    {
        // could do it with rev
        if (s.empty())
            return true;

        int left = 0, right = s.length() - 1; // 2pointer approach

        while (left < right)
        {
            if (tolower(s[left]) == tolower(s[right]))
            {
                left++;
                right--;
            }

            else if (!isalpha(s[left]) && !isdigit(s[left]))
            {
                left++;
            }

            else if (!isalpha(s[right]) && !isdigit(s[right]))
            {
                right--;
            }

            else
            {
                return false;
            }
        }

        return true;
    }
};