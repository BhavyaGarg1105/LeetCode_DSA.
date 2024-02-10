class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n - 1, ans = 0;
        if(s[i]==' '){
        while(s[i]==' ' && i!=0)
        i--;
        }

        while(s[i]!=' '){
            ans++;
            i--;
            if(i<0)
            break;
        }
        return ans;
    }
};