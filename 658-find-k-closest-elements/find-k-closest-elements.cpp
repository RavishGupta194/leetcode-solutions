class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x){
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
       int h=start;
    
        
    int l=h-1;
    while(k--){
        if(l<0){
            h++;
        }
        else if(h>=arr.size()){
            l--;
        } 
        else if(x-arr[l]>arr[h]-x){
            h++;
        }
        else{
            l--;
        }
    }
    return vector<int>(arr.begin()+l+1,arr.begin()+h);
}
};