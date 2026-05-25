class Solution {
public:
    bool check(vector<int>& nums) {

        vector<int> temp = nums;

        // Sort temp array
        sort(temp.begin(), temp.end());

        int n = nums.size();

        // Try all rotations
        for (int k = 0; k < n; k++) {

            // Compare arrays
            if (nums == temp) {
                return true;
            }

            // Rotate left by 1
            int first = nums[0];

            for (int i = 0; i < n - 1; i++) {
                nums[i] = nums[i + 1];
            }

            nums[n - 1] = first;
        }

        return false;
    }
};