class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        int temp = num;

        // Create a mask of all 1s with the same bit length as num
        while (temp > 0) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }

        // XOR flips each bit
        return num ^ mask;
    }
};