class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(!nums1.empty() && nums1.back()==0 && nums1.size()>m){
            nums1.pop_back();
        }
        while(!nums2.empty()&&nums2.back()==0 && nums2.size()>n){
            nums2.pop_back();
        }
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
    }
};