class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        double sum = 0;
        int n = nums.size();
        double averages = INT_MAX;
        
        for(int i = 0; i < n/2; i++){
            sum = (nums[i] + nums[n - 1 - i]) / 2.0;
            averages=min(sum,averages);
        }
        
        return averages;
    }
};