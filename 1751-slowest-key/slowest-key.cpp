class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max=releaseTimes[0]-0;
        int index=0;
        for(int i=0;i<releaseTimes.size()-1;i++){
            if(releaseTimes[i+1]-releaseTimes[i]>max){
                max=releaseTimes[i+1]-releaseTimes[i];
                index=i+1;
            }
            else if(releaseTimes[i+1]-releaseTimes[i] == max) {  // 👈 ADD THIS
                if(keysPressed[i+1] > keysPressed[index]) {
                    index = i+1;
                }
            }
        }
        return keysPressed[index];
    }
};