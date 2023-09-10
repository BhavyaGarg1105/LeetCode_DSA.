class Solution {
    int helper(vector<int> arr,vector<int>& dp,int n){
        if(n==0)
        return arr[0];
        
        if(n<0)
        return 0;
        
        if(dp[n]!=-1)
        return dp[n];
        
        int pick = helper(arr,dp,n-2) + arr[n];
        int notPick = helper(arr,dp,n-1);
        
        return dp[n] = max(pick,notPick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        /*Memoization Code
        vector<int> dp(n,-1);
        return helper(nums,dp,n-1);
        */

        // Tabulation Code.

        int prev = nums[0];
        int prev2 = 0;

        for(int i = 1;i<n;i++)
        {
            int pick = nums[i] + prev2;
            int notPick = prev;

            int curr = max(pick,notPick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};