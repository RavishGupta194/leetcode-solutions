class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int freq[100]={0};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<100;i++){
          if(freq[i]==2){
            ans.push_back(i);
          }
        }
        return ans;
    }
};