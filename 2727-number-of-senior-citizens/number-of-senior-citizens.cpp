class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        int num=0;
        for(int i=0;i<details.size();i++){
            string str=details[i];
            if(str.length()>11){
                string sub= str.substr(11,2);
                num=stoi(sub);
            }
            if(num>60){
                count++;
            }
        }
        return count;
    }
};