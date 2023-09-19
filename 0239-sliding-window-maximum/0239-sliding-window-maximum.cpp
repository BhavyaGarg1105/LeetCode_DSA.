class Solution 
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> q;
        int start=0,end=0;
        while(end<nums.size())
        {
            while(!q.empty() && q.back()<nums[end])
            {
                q.pop_back();
            }
            q.push_back(nums[end]);

            if(end-start+1<k)
            {
                end++;
            }

            else if(end-start+1==k){
                ans.push_back(q.front());

                if(nums[start]==q.front())
                {
                    q.pop_front();
                }
                start++;
                end++;
            }
        }
        return ans;
    }
};