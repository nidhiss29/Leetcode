class Solution
{
public:
    static bool myfunction(vector<int> &a, vector<int> &b)
    {
        return a[1] > b[1]; // no of units are being compared

        {
            return true;
        }
        return false;
    }

    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {

        sort(boxTypes.begin(), boxTypes.end(), myfunction);

        int ans = 0;
        for (auto box : boxTypes)
        {
            int x = min(box[0], truckSize);
            ans += (x * box[1]); // mtlb agr trucksize chota h to utni baar unit mult
            // if (2,3) 2 box each of 3 unit but trucksize 1 h to min 1 so ans 1*3
            truckSize -= x; // not ans but x as yha no less krna h units nhi
            if (!truckSize) // if size is zero now
                break;
        }
        return ans;
    }
};