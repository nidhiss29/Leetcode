class Solution
{
public:
    int numberOfMatches(int n)
    {
        int nomatch = 0;
        int number = 0;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                nomatch = n / 2;
                n = n / 2;
            }
            else
            {
                nomatch = (n - 1) / 2;
                n = ((n - 1) / 2) + 1;
            }
            number += nomatch;
        }
        return number;
    }
};