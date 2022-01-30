class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i=0;i<n/2;i++) { 
            for (int j=i;j<n-i-1;j++) { 
        // Swapping elements after each iteration in Clockwise direction
            int temp = matrix.at(i).at(j); 
            matrix.at(i).at(j) = matrix.at(n-1-j).at(i); 
            matrix.at(n-1-j).at(i) = matrix.at(n-1-i).at(n-1-j);
            matrix.at(n-1-i).at(n-1-j) = matrix.at(j).at(n-1-i); 
            matrix.at(j).at(n-1-i) = temp; 
            }
        } 
    }
};
