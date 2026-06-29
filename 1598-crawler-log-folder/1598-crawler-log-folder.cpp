class Solution {
public:
    int minOperations(vector<string>& logs) {
        int pushCount = 0;
        stack<string> st;
        for (int i = 0; i < logs.size(); i++) {
            if (logs[i] == "./") {
                continue;
            }
            if (st.empty() && logs[i] == "../")
                continue;
            if (!st.empty() && logs[i] == "../") {
                st.pop();
                pushCount--;
            } else {
                st.push(logs[i]);
                pushCount += 1;
            }
        }
        return pushCount;
    }
};