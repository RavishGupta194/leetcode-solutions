class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        int ans=0;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(1LL*mid*mid==x){
                return mid;
            }
            else if(1LL*mid*mid>x){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
            mid=start+(end-start)/2;

        }
        return ans;
    }
};