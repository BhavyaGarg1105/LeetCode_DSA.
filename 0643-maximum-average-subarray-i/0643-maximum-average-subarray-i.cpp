class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        if(n==1)
        return nums[0];

        double sum = 0,maxSum = 0;
        for(int i = 0;i<k;i++)
        sum+= (double)nums[i];

        int i=0, j=k;
        maxSum = sum;
        while(j<n){
            sum-=nums[i];
            sum+=nums[j];
            maxSum = max(sum,maxSum);
            i++,j++;
        }
        return maxSum/k;
    }
};