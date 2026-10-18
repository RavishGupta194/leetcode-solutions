
class Solution {
public:
    long long mod = 1e9 + 7;
    long long c[1001][1001] = {};

    long long solve(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2) return 1;

        vector<int> left, right;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[0])
                left.push_back(nums[i]);
            else
                right.push_back(nums[i]);
        }

         long l = solve(left);
        long long r = solve(right);

        return (((c[n - 1][left.size()] * l) % mod) * r) % mod;
    }

    int numOfWays(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i <= n; i++) {
            c[i][0] = c[i][i] = 1;
            for (int j = 1; j < i; j++) {
                c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % mod;
            }
        }

        return (solve(nums) - 1 + mod) % mod;
    }
};
