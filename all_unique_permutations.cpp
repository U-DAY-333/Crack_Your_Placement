class Solution {
  public:
  
    set<vector<int>>ans;
    
    void solve(int i, vector<int>& arr, vector<int>& temp, vector<int>& vis)
    {
        if(i == arr.size())
        {
            ans.insert(temp);
            return;
        }
        
        for(int j=0; j<arr.size(); j++)
        {
            if(!vis[j])
            {
                temp.push_back(arr[j]);
                vis[j]++;
                
                solve(i+1, arr, temp, vis);
                
                vis[j]--;
                temp.pop_back();
            }
        }
        
    }
  
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        
        sort(arr.begin(), arr.end());
        
        vector<int>temp;
        vector<int>vis(arr.size(), 0);
        
        solve(0, arr, temp, vis);
        
        vector<vector<int>>fans;
        for(auto it: ans) fans.push_back(it);
        
        return fans;
    }
};