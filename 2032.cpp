class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
    {
        vector<int> distinct;

        // we are using set here because it save distinct elements and here in some array some elements are repeated so cause error

        set<int> set1, set2, set3;
        for (auto x : nums1)
            set1.insert(x);
        for (auto x : nums2)
            set2.insert(x);
        for (auto x : nums3)
            set3.insert(x);

        unordered_map<int, int> map;
        for (auto y : set1)
            map[y]++;
        for (auto y : set2)
            map[y]++;
        for (auto y : set3)
            map[y]++;

        for (auto z : map)
        {
            if (z.second >= 2)
                distinct.push_back(z.first);
        }

        return distinct;
    }
};