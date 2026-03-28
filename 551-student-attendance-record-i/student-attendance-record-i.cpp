class Solution {
public:
    bool checkRecord(string s) {
        int abs = 0;
        int late = 0;
        for (char ch : s) {
            if (ch == 'A') {
                abs++;
                if (abs >= 2) {
                    return false;
                }
                
            }
            if (ch == 'L') {
                late++;
            
                if (late >= 3) return false;
                } else {
                    late = 0;
                }
        }
        
        return true;
    }
};