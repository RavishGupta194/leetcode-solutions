class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> temp;
        temp.push_back(0);
        for (int i = 1; i <= gain.size(); i++) {
            temp.push_back(temp[i - 1] + gain[i-1]);
        }
        int max=INT_MIN;
        int i=0;
        while(i<temp.size()){
            if(temp[i]>0 && temp[i]>max){
                max=temp[i];
            }
            i++;
        }
        if(max==INT_MIN){
            return 0;
        }
        return max;
    }
};