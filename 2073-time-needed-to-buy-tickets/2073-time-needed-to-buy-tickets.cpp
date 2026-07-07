class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < tickets.size(); i++) {
            q.push({tickets[i], i});
        }
        while (!q.empty()) {
            auto person = q.front();
            q.pop();
            time++;
            person.first--;
            if(person.first==0){
                if(person.second==k)
                    return time;;
            }
            else{
                            q.push({person.first,person.second});


            }

        }
        return time;
    }
};