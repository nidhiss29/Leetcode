class Solution
{
public:
    string toLowerCase(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        return s;
    }
};

/* OR
BASIC APPROACH
 for (char& c : str) {
        if (c >= 'A' && c <= 'Z') c += 32;
    }
    return str;*/