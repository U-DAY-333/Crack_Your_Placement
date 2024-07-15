class Solution {
public:
    void sortColors(vector<int>& arr) 
    {
        int n = arr.size();

        int low = 0, high = n-1;
        
        // Dutch National Flag
        for(int i=0; i<n && i<=high; i++)
        {
            if(arr[i] == 0)
            {
                swap(arr[i], arr[low++]);
            }
            else if(arr[i] == 2)
            {
                swap(arr[i], arr[high--]);
                i--;
            }
        }

    }
};