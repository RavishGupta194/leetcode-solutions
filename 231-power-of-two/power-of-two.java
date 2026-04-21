class Solution {
    public boolean isPowerOfTwo(int n) {
          if(n<=0){
            return false;
        }
        int num=n;
        while(num%2==0){
            num=num/2;
        }
        if(num==1){
            return true;
        }
        return false;
    }
}