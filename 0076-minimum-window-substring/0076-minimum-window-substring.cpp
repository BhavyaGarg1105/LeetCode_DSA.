class Solution {
public:
    string minWindow(string s, string t) 
    {
        map<char,int> mp;
        for(auto i: t)
        {
            mp[i]++;
        }

        int start=0, end=0;
        int count = mp.size();
        int st=0;
        int mini=INT_MAX;

        while(end<s.size())
        {
            mp[s[end]]--;
            if(mp[s[end]]==0)
            {
                count--;
            }
            if(count==0)
            {
                while(count==0)
                {
                   if((end-start+1)<mini)
                   {
                       mini=end-start+1;
                       st=start;
                   }
                   mp[s[start]]++;
                   if(mp[s[start]]>0)
                   {
                       count++;
                   }
                   start++;
                }
            }
            end++;
        }

        if(mini==INT_MAX)
        {
            return "";
        }
        else
        {
            return s.substr(st,mini);
        }
    }
};