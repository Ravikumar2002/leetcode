class Solution {
public:
    int numSquares(int n) {
        vector<int> ans(n+1,INT_MAX);
        ans[0]=0;
        int count=1;
        while(count*count<=n){
            int sq=count*count;
            for(int i=sq;i<n+1;i++){
                ans[i]=min(ans[i-sq] + 1,ans[i]);
            }
            count++;
        }
        return ans[n];
    }
};