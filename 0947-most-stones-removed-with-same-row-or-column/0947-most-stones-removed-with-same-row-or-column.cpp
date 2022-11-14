class Solution {
public:
    int n;
    vector<int>vis;
    void dfs(int indx,vector<vector<int>> &stones){
       vis[indx]=1;
        for(int i=0;i<n;i++){
            if(vis[i])
                continue;
            if(stones[indx][0]==stones[i][0]|| stones[indx][1]==stones[i][1]){
                dfs(i,stones);
            }
        }
        return;
    }
    int  removeStones(vector<vector<int>>& stones) {
       n=stones.size();
        vis.resize(n,0);
        int val=0;
        
        for(int i=0;i<n;i++){
         if(vis[i])
             continue;
            val++;
            dfs(i,stones);
}
        return n-val;
        
    }
};