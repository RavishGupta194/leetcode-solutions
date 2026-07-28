class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }

        string left = "";
        string mid = "";

        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < freq[i] / 2; j++) {
                left += char(i + 'a');
            }

            if (freq[i] % 2 == 1) {
                mid = char(i + 'a');
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};