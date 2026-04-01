class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
        }
    int count=0;
    for(int j=0;j<gain.size();j++){
        if(gain[j]>=0){
            count++;
        }
    }
    if(count==0){
        return 0;
    }
    int maxVal = *max_element(gain.begin(), gain.end());

    
    return maxVal;
    }
};