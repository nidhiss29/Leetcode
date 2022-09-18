class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        /*     vector<int> ans;
             signed long long int number=0;

                for(int i =0 ; i<digits.size() ; i++){
                    number = number*10 + digits[i];
                    //overflow error due to big size of input int is not working
                    }
                number = number+1;
                string conv;
                conv  = to_string(number);
                int len = conv.length();

                for(int i =0 ; i<len;i++){
                  ans.push_back(number%10);
                    number = number/10;
                }
                reverse(ans.begin(),ans.end());

                return ans;   */

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] != 9)
            {
                digits[i]++; // easy logic just check if 9 is lst dig give 0 nd then insert 1
                return digits;
            }
            else
                digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};