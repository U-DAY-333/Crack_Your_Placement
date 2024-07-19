class Solution {
public:
    int maxProfit(vector<int>& arr) 
    {
        int n = arr.size();

        int maxi = -1;
        int ans = 0;

        for(int i=n-1; i>=0; i--)
        {
            ans = max(ans, maxi-arr[i]);
            maxi = max(maxi, arr[i]);
        }    

        return ans;
    }
};