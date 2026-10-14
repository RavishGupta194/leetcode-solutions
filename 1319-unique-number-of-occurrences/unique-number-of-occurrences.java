class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        for (int i=0;i<arr.length;i++) {
            freq.put(arr[i], freq.getOrDefault(arr[i], 0) + 1);
        }
        HashSet<Integer> seen = new HashSet<>();
        for (int count : freq.values()) {
            if (seen.contains(count)) {
                return false;
            }

            seen.add(count);
        }

        return true;
    }
}