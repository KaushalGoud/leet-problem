class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]!="C" && operations[i]!="D" && operations[i]!="+")
            {
                st.push(stoi(operations[i]));
            }
            else if(operations[i]=="C" && !st.empty()){
                st.pop();
            }
            else if(operations[i]=="D"){
                if(!st.empty()){
                    int x=(st.top())*2;
                    st.push(x);

                }
            }
            else if(operations[i]=="+"){
                int x=(st.top());
                st.pop();
                int y=(st.top());
                st.pop();
                int sum=x+y;
               
                st.push(y);
                 st.push(x);
                st.push(sum);

            }
        }
        while(!st.empty()){
            sum+=st.top();
            st.pop();

        }
        return sum;
    }
};