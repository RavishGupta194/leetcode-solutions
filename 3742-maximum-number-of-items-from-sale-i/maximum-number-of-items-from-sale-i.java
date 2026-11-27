
class Solution {
    public int maximumSaleItems(int[][] items, int budget) {
        int n = items.length;
        int[] value = new int[n];

        // Calculate free items for each item
        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (i != j && items[j][0] % items[i][0] == 0) {
                    count++;
                }
            }

            value[i] = count + 1;
        }

        int[] dp = new int[budget + 1];
        int neg = -1000000;

        java.util.Arrays.fill(dp, neg);
        dp[0] = 0;

        int ans = 0;

        // Process prices from high to low
        for (int p = 1500; p >= 1; p--) {

            int[] cur = new int[budget + 1];
            java.util.Arrays.fill(cur, neg);

            // Select at least one item of price p
            for (int i = 0; i < n; i++) {
                if (items[i][1] != p) continue;

                for (int b = budget; b >= p; b--) {

                    if (dp[b - p] != neg) {
                        cur[b] = Math.max(cur[b],
                                          dp[b - p] + value[i]);
                    }

                    if (cur[b - p] != neg) {
                        cur[b] = Math.max(cur[b],
                                          cur[b - p] + value[i]);
                    }
                }
            }

            // Buy additional copies of cheapest item
            for (int b = 0; b <= budget; b++) {
                if (cur[b] != neg) {
                    ans = Math.max(ans,
                                   cur[b] + (budget - b) / p);
                }
            }

            // Add current price items to normal DP
            for (int i = 0; i < n; i++) {
                if (items[i][1] != p) continue;

                for (int b = budget; b >= p; b--) {
                    if (dp[b - p] != neg) {
                        dp[b] = Math.max(dp[b],
                                         dp[b - p] + value[i]);
                    }
                }
            }
        }

        return ans;
    }
}
