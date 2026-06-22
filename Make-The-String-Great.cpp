1class Solution {
2public:
3    string makeGood(string s) {
4        stack<char> st;
5        string sa = "";
6        string ans = "";
7        for (int i = 0; i < s.length(); i++) {
8            if (!st.empty() && abs((int)st.top() - (int)s[i]) ==32 ) {
9                st.pop();
10            } else {
11                st.push(s[i]);
12            }
13        }
14        while (!st.empty()) {
15            sa += st.top();
16            st.pop();
17        }
18        for(int i=sa.length()-1;i>=0;i--){
19            ans+=sa[i];
20        }
21        return ans;
22    }
23};