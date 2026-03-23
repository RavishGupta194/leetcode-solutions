class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];  
        int x1 = coordinates[1][0]; 
        int y1 = coordinates[1][1];  


        for(int i = 2; i < coordinates.size(); i++) {
            int x = coordinates[i][0];  // x of current point
            int y = coordinates[i][1];  // y of current point

            // Step 3: Use cross multiplication to avoid division
            if ((y - y0) * (x1 - x0) != (y1 - y0) * (x - x0)) {
                return false;  // Slopes differ → not a straight line
            }
        }
        return true;
    }
};