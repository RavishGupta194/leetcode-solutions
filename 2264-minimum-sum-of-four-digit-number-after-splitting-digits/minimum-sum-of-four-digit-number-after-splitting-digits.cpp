class Solution {
public:
    int minimumSum(int num) {
        vector<int> a;

        while(num > 0) {
            a.push_back(num % 10);
            num /= 10;
        }

        sort(a.begin(), a.end());

        int n1 = a[0] * 10 + a[2];
        int n2 = a[1] * 10 + a[3];

        return n1 + n2;
    }
};