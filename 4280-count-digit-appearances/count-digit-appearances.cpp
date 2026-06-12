

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        char d = digit + '0'; // convert digit to char

        for (int num : nums) {
            string s = to_string(num);
            for (char c : s) {
                if (c == d) count++;
            }
        }

        return count;
    }
};