class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int result=0;
        for (int i = 0; i < tokens.size(); i++) {
            if (!st.empty() &&
                (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")) {

                int a = st.top();

                st.pop();
                int b = st.top();
                st.pop();
                
                if (tokens[i] == "+")
                    result = b + a;
                else if (tokens[i] == "-")
                    result = b - a;
                else if (tokens[i] == "*")
                    result = b * a;
                else
                    result = b / a;
                st.push(result);
            }
            else{
                st.push(stoi(tokens[i]));
            }

        }
        return st.top();
    }
};