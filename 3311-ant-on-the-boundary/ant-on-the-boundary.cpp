class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum=nums[0];
        int target=0;
        int count=0;
        for(int i=1; i<nums.size();i++){
            sum=sum+nums[i];
            if(sum==target){
                count++;
            }
        }
    return count;
    }
};