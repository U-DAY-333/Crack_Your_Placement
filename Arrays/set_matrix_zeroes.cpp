class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) 
    {
        int m = arr.size();
        int n = arr[0].size();

        bool rows = false, cols = false;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(!arr[i][j])
                {
                    arr[i][0] = 0;
                    arr[0][j] = 0;

                    if(j == 0) rows = true;
                    if(i == 0) cols = true;
                }
            }
        }    

      
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                    if(!arr[i][0] || !arr[0][j]) arr[i][j] = 0; 
            }
        }

        if(rows) 
        {
            for(int i=0; i<m; i++) arr[i][0] = 0;
        }

        if(cols) 
        {
            for(int i=0; i<n; i++) arr[0][i] = 0;
        }

    }
};
