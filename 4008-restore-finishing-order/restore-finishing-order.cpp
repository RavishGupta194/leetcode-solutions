class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_set<int> st;
        for (int i = 0; i < friends.size(); i++) {
            st.insert(friends[i]);
        }
        for (int i = 0; i < order.size(); i++) {
            if (st.count(order[i])==1) {
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};