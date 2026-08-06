class Solution {
public:
    int smallestNumber(int n, int t) {
    int sum;
    int digit;
    for(int i=n;i<=100;i++){
            sum=1;
            int k=i;
            while(k>0){
            digit=k%10;
            k=k/10;
            sum=sum*digit;
        }
        if(sum%t==0 && i>=n){
            return i;
        }
    }    
    return 0;
    }
};