class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
        for(int i=0;i<p.length();i++)
        {
            mp[p[i]]++;
        }
        int count = mp.size();

        int start=0,end=0;
        vector<int> ans;
        while(end<s.length()){

            if(mp.count(s[end])!=0)
            {
                mp[s[end]]--;

                if(mp[s[end]]==0)
                {
                    count--;
                }
            }

            if(end-start+1<p.length())
            {
                end++;
            }

            else if(end-start+1==p.length()){
                if(count==0)
                {
                    ans.push_back(start);
                }
                
                if(mp.count(s[start])!=0){
                    if(mp[s[start]]==0){
                        count++;
                    }
                    mp[s[start]]++;
                }
                start++;
                end++;
            }
        }
        return ans;
    }
};