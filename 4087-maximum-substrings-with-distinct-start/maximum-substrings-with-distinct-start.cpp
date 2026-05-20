class Solution {
public:
    int maxDistinct(string s) {
        set<char> uniqueChars;

    for (size_t i = 0; i < s.length(); i++) {
        uniqueChars.insert(s[i]);
        }
        return uniqueChars.size();

    }
};