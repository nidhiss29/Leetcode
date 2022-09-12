//QUE 1672
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int lengthr = accounts.size();
     //  int arr[12];
     vector<int> arr(lengthr,0);
        int collen = accounts[0].size();
        int maximum =-1;
        for(int i=0;i<lengthr;i++)
        {     
            int sum =0;
            for(int j=0;j<collen;j++)
            {
                sum += accounts[i][j];
            }
            /*if(maximum < sum){
                maximum = sum;
            }*/
           //maximum = max(maximum,sum);
           arr[i]=sum;

        }
        for (int i=0;i<lengthr;i++){
            if(maximum<arr[i]){
                maximum = arr[i];
            }
        }
        return maximum;
    }
};

//or use max(maximum,sum) both work
//only function
//array logic also works
