class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        int n = arr.size(), M = 1e9 + 7;
        vector<vector<int>> dp(target + 1, vector<int>(4));
        dp[0][0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = target; j >= arr[i-1]; --j) {
                for (int k = 3; k >= 1; --k) {
                    dp[j][k] = (dp[j][k] + dp[j-arr[i-1]][k-1])% M;
                }
            }
        }
        return dp[target][3];
        
    }
};