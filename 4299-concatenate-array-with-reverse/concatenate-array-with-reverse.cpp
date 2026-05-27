class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        // vector<int> temp;
        // for(int i=0;i<nums.size();i++){
        //     temp.push_back(nums[i]);
        // }
        for(int i=nums.size()-1;i>=0;i--){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};