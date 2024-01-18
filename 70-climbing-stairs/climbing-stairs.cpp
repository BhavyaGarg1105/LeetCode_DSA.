class Solution {
public:
    int helper(int n, vector<int>& mem){
        if(n<=1)
        {
            return 1;
        }
        if(mem[n] == -1){
            mem[n] = helper(n-1,mem) + helper(n-2,mem);
        }
        return mem[n];
    }
    int climbStairs(int n) {
        vector<int> mem(n+1,-1);
        return helper(n,mem);
    }
};