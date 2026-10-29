import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Solution {
    public int[] frequencySort(int[] nums) {
        // Step 1: Count the frequency of each number
        Map<Integer, Integer> freqMap = new HashMap<>();
        for (int num : nums) {
            freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
        }
        
        // Step 2: Convert the array to a List so we can use custom sorting
        List<Integer> list = new ArrayList<>();
        for (int num : nums) {
            list.add(num);
        }
        
        // Step 3: Sort using a custom comparator
        Collections.sort(list, (a, b) -> {
            int freqA = freqMap.get(a);
            int freqB = freqMap.get(b);
            
            if (freqA != freqB) {
                // If frequencies are different, sort by increasing frequency
                return Integer.compare(freqA, freqB);
            } else {
                // If frequencies are the same, sort by decreasing value
                return Integer.compare(b, a);
            }
        });
        
        // Step 4: Convert the sorted list back to a primitive int array
        for (int i = 0; i < nums.length; i++) {
            nums[i] = list.get(i);
        }
        
        return nums;
    }
}
