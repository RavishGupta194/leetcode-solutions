class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int minimum = *min_element(nums1.begin(),nums1.end());
        int maximum = *min_element(nums2.begin(),nums2.end());
        return maximum-minimum;
    }
};