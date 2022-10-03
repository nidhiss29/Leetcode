class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        // brute
        /*   sort(nums.begin(),nums.end());
           int n = nums.size();
           int largest = nums[n-k];
           return largest;  */

        // or

        // main logic is to sort and find element now upto us sorting and storing technique

        /* sort(nums.begin(), nums.end(), greater<int>());
    return nums[k-1]; */

        //  by heap approach add all elements in max heap and then pop k-1 items top elemnt left is ans

        priority_queue<int> maxHeap(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++)
        {
            maxHeap.pop();
        }
        int top = maxHeap.top();
        return top;
    }
};