class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> friends;

        for (int i = 1; i <= n; i++) {
            friends.push_back(i);
        }

        int index = 0;

        while (friends.size() > 1) {
            for (int i = 1; i < k; i++) {
                index++;
                if (index == friends.size()) {
                    index = 0;
                }
            }
            friends.erase(friends.begin() + index);
            if (index == friends.size()) {
                index = 0;
            }
        }

        return friends[0];
    }
};