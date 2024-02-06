				// \U0001f609\U0001f609\U0001f609\U0001f609Please upvote if it helps \U0001f609\U0001f609\U0001f609\U0001f609
class Solution {
public:
    bool isSubsequence(string s, string t) {
        
    int j = 0; 
    for (int i = 0; i < t.length() && j < s.length(); i++)
        if (s[j] == t[i])
            j++;
 
     return (j == s.length());
    }
};