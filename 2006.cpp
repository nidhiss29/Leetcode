class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        /*     int count=0;
             for(int i=0;i<nums.size();i++){
                 for(int j =0;j<nums.size();j++){
                    if((nums[i]-nums[j]) == k)
                        count+=1;
                 }
             }
             return count;
         }
     }; */

        // hashmap approach  https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/discuss/1470881/C%2B%2B-(1.-O(n2)-2.-O(n))-Diagram-Attached   diagram here

        unordered_map<int, int> map;
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int val1 = map[nums[i] + k];
            int val2 = map[nums[i] - k];
            res += val1 + val2;
            map[nums[i]]++;
        }
        return res;
    }
};