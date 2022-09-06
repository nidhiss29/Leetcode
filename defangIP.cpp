class Solution
{
public:
    string defangIPaddr(string address)
    {
        string defanged_add = "";

        for (auto letter : address)
        {
            if (letter != '.')
            {
                defanged_add.push_back(letter);
            }
            else
            {
                defanged_add.append("[.]");
            }
        }

        return defanged_add;
    }
};