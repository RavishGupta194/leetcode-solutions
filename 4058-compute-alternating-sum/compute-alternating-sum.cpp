class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum =0;
        int i=0;
        if(nums.size()>1 && nums.size()%2==0){
        for(i=0; i<nums.size()-1; i+=2){
            sum = sum + nums[i]-nums[i+1];
        }
    }
    else if(nums.size()>1 && nums.size()%2!=0){
        for(i=0; i<nums.size()-1; i+=2){
            sum = sum + nums[i]-nums[i+1];
        }
        sum=sum+nums[nums.size()-1];
    }
        else{
            return nums[0];
        }
        return sum;
    }
};