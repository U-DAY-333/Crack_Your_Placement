class Solution {
public:
    void moveZeroes(vector<int>& arr)
    {
        int n = arr.size();
        int j = 0, x = 0;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] != 0)
            {
                arr[j] = arr[i];
                j++;
            }
            else x++;
        }
        
        int i = n-1;
        while(x--) arr[i] = 0, i--;
            
    }
};