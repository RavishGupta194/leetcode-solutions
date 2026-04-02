class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1="";
        for(int i=0;i<word1.size();i++){
            result1=result1+word1[i];
        }
        word1={result1};
        result1="";
        for(int i=0;i<word2.size();i++){
            result1=result1+word2[i];
        }
        word2={result1};
        if(word1==word2){
            return true;
        }
        return false;
    }
};