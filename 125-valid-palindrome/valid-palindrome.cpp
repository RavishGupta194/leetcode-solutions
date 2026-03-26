#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                temp += tolower(s[i]);
            }
        }
        string temp2 = "";

        for (int i = temp.length() - 1; i >= 0; i--) {
            temp2 += temp[i];
        }
        if (temp == temp2) {
            return true;
        }
        return false;
    }
};