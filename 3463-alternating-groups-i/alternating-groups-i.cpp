class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {

        vector<int>temp;
        for(int i=0;i<colors.size();i++){
            temp.push_back(colors[i]);
        }
        temp.push_back(colors[0]);
        temp.push_back(colors[1]);
        int count=0;
        for(int i=1;i<temp.size()-1;i++){
            if(temp[i-1]!=temp[i] && temp[i+1]!=temp[i]){
                count++;
            }
        }
        return count;
    }
};