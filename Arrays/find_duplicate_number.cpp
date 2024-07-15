class Solution {
public:
    int findDuplicate(vector<int>& arr) 
    {
        int n = arr.size();

        for(int i=0; i<n; i++)
        {
            while(arr[i] != i+1)
            {
                int curr = arr[i];
                int next = arr[arr[i]-1];

                if(curr == next) return curr;
                else swap(arr[i], arr[arr[i]-1]);
            }
        }

        return 0;
    }
};