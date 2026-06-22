1class Solution {
2public:
3    string removeStars(string s) {
4        string ans = "";
5       
6        for (int i = 0; i < s.length(); i++) {
7           if(s[i]=='*')ans.pop_back();
8           else ans.push_back(s[i]);
9        }
10       
11        return ans;
12    }
13};