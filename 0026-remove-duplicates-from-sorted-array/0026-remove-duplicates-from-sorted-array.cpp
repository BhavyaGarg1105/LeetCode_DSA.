class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
        // int i=0,j=0;
        // while(j<nums.size())
        //{
        //     if(nums[j]!=nums[i]){
        //         i++;
        //         nums[i]=nums[j];
        //     }
        //     j++;
        // }
        // return i+1;
    }
};