class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        /*       int day;
               int buy=0,sell=0;
               buy = *min_element(prices.begin(), prices.end());

             auto it = find(prices.begin(), prices.end(), buy);   //not working fr condition{2,4,1} as not all values compared

             sell = *max_element(it, prices.end());

                day = sell - buy;  */

        // logic check each day all prices[i] profit by min value and compare with overall profit jo h max out of all

        int overall = 0, profitday = 0; // profitperday and overall
        int min = INT_MAX;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
            }

            profitday = prices[i] - min;
            if (overall < profitday)
            {
                overall = profitday;
            }
        }

        return overall;
    }
};