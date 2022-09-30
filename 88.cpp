class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // brute put values of num1 in new array and simply merge two array in num1

        vector<int> temp(m, 0);
        for (int i = 0; i < m; i++)
        {
            temp[i] = nums1[i];
        }
        int i = 0, j = 0;
        int k = 0;
        while (i < m && j < n)
        {
            if (temp[i] < nums2[j])
            {
                nums1[k] = temp[i];
                i++;
            }
            else
            {
                nums1[k] = nums2[j];
                j++;
            }
            k++;
        }

        while (i < m)
        {
            nums1[k] = temp[i];
            k++;
            i++;
        }
        while (j < n)
        {
            nums1[k] = nums2[j];
            k++;
            j++;
        }

        // optimized STL

        /*       nums1.resize(m);
             nums1.insert(nums1.end(), nums2.begin(), nums2.end());
             sort(nums1.begin(), nums1.end());  */

        // or
        /*    int j=0;
                for(int i=m; i<nums1.size(); i++){
                    nums1[i]=nums2[j];
                    j++;
                }
                sort(nums1.begin(), nums1.end());

                */
    }
};