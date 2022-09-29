class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        set<string> strings; // set helps in finding distinct emails used
        for (auto e : emails)
        {
            string mail = "";
            for (auto s : e)
            {
                if (s == '+' || s == '@')
                    break;
                if (s == '.')
                    continue;

                mail += s;
            }
            int pos = e.find('@');
            mail += e.substr(pos);
            strings.insert(mail);
        }
        return strings.size();
    }
};