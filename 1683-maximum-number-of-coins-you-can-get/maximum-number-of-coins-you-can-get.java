
class Solution {
    public int maxCoins(int[] piles) {
        Arrays.sort(piles);

        int ans = 0;
        int i = piles.length - 2;

        while (i >= piles.length / 3) {
            ans += piles[i];
            i -= 2;
        }

        return ans;
    }
}
