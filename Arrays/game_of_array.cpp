class Solution {
public:
    void gameOfLife(vector<vector<int>>& arr) 
    {
        int m = arr.size();
        int n = arr[0].size();

        vector<vector<int>>ans(m, vector<int>(n, 0));
        vector<vector<int>>dir = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}, {1, -1}, {-1, 1}, {1, 1}, {-1, -1}};

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                int c = 0;

                for(int k=0; k<8; k++)
                {
                    int x = i+dir[k][0];
                    int y = j+dir[k][1];

                    if(min(x, y) >= 0 && x < m && y < n && arr[x][y]) c++;
                }

                if((c == 2 || c == 3) && arr[i][j]) ans[i][j]++;
                if((c == 3) && arr[i][j] == 0) ans[i][j]++;
            }
        }

        arr = ans;
    }
};