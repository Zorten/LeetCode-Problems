class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int maxArea= 0;
        int length = 0;
        int minHeight = 0;
        
        /* SOLUTION 1   
        
        for (int i = 0; i < height.size(); i++){
            for (int j = 1; j < height.size(); j++){
                length = j - i;
                
                minHeight = min(height.at(j), height.at(i));
                area = length * minHeight;
                maxArea = max(area, maxArea);
            } 
        }
        
        return maxArea;
        
        */
        
        int i = 0;
        int j = height.size() - 1;
        while (i < j){
            length = j - i;
            minHeight = min(height.at(j), height.at(i));
            area = length * minHeight;
            maxArea = max(area, maxArea);
            
            while ((i < j) && (height.at(i) <= minHeight)) {
                i++;
            }
            
            while ((i < j) && (height.at(j) <= minHeight)){
                j--;
            }
        }
        
        return maxArea;
        
    }
};
