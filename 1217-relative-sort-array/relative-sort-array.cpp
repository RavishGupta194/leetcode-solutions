class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> temp;
        for(int i=0;i<arr2.size();i++){
            for(int j=0; j<arr1.size();j++){
                if(arr1[j]==arr2[i]){
                    temp.push_back(arr1[j]);
                }
            }
        }
        vector<int>temp2;
        bool found=false;
        for(int i=0; i<arr1.size();i++){
            for(int j=0; j<arr2.size();j++){
                if(arr2[j]==arr1[i]){
                    found=true;
                }
            }
            if(found==false){
                temp2.push_back(arr1[i]);
            }
            found=false;
        }
        sort(temp2.begin(),temp2.end());
        temp.insert(temp.end(), temp2.begin(), temp2.end());
        return temp;
    }
};