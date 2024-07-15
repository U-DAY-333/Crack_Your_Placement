class Solution {
public:
    int removeDuplicates(vector<int>& arr) 
    {
        int n = arr.size();

        int prev = -101;
        int j = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] > prev)
            {
                arr[j] = arr[i];
                prev = arr[i];
                j++;
            }

        }
        
        return j;
    }
};