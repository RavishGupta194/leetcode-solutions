
class Solution {
    public long countNonDecreasingSubarrays(int[] nums, int k) {
        int n = nums.length;
        int LOG = 17;

        int[][] next = new int[LOG + 1][n];
        long[][] sum = new long[LOG + 1][n];

        int[] stack = new int[n];
        int top = -1;

        int[] nge = new int[n];

        for (int i = n - 1; i >= 0; i--) {
            while (top >= 0 && nums[stack[top]] <= nums[i]) {
                top--;
            }

            nge[i] = top == -1 ? -1 : stack[top];
            stack[++top] = i;
        }

        for (int i = 0; i < n; i++) {
            next[0][i] = nge[i];

            if (nge[i] != -1) {
                sum[0][i] = (long) nums[i] * (nge[i] - i);
            }
        }

        for (int j = 1; j <= LOG; j++) {
            for (int i = 0; i < n; i++) {
                int mid = next[j - 1][i];

                if (mid != -1) {
                    next[j][i] = next[j - 1][mid];
                    sum[j][i] = sum[j - 1][i] + sum[j - 1][mid];
                } else {
                    next[j][i] = -1;
                }
            }
        }

        long[] prefix = new long[n + 1];

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        long ans = 0;

        for (int r = 0; r < n; r++) {
            int low = 0, high = r;
            int left = r + 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                long maxSum = 0;
                int p = mid;

                for (int j = LOG; j >= 0; j--) {
                    if (next[j][p] != -1 && next[j][p] <= r) {
                        maxSum += sum[j][p];
                        p = next[j][p];
                    }
                }

                maxSum += (long) nums[p] * (r - p + 1);

                long operations = maxSum - (prefix[r + 1] - prefix[mid]);

                if (operations <= k) {
                    left = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            ans += r - left + 1;
        }

        return ans;
    }
}
