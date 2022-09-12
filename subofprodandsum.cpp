//QUE 1281
class Solution
{
public:
    int subtractProductAndSum(int n)
    {

        int result, len;
        int dig, prod = 1, sum = 0;
        vector<int> arr;

        while (n != 0)
        {
            dig = n % 10;
            n = n / 10;
            arr.push_back(dig);
        }

        len = arr.size();
        for (int i = 0; i < len; i++)
        {
            prod *= arr[i];
            sum += arr[i];
        }
        result = prod - sum;
        return result;
    }
};

/* in while loop only you can apply prod ans um command so a compact code prod*=dig side by side*/
