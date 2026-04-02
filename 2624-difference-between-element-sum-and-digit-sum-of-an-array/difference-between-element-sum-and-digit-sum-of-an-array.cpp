class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumDigit = 0;
        int sumElement = 0;
        for (int i = 0; i < nums.size(); i++) {
            int number = nums[i];
            sumElement += nums[i];
            while (number != 0) {
                int digit = number % 10;
                sumDigit += digit;
                number = number / 10;
            }
        }
        int result = abs(sumDigit - sumElement);
        return result;
    }
};