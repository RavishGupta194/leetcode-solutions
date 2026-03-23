class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>temp;
        temp=nums;
        if(nums.size() == 1) return 0;
        sort(temp.begin(),temp.end());
        if(temp[temp.size()-1]>=2*temp[temp.size()-2]){
            for(int i=0; i<nums.size();i++){
                if(nums[i]==temp[temp.size()-1]){
                    return i;
                }
            }
        }
        
        return -1;
    }
};