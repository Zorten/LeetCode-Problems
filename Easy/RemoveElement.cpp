class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        bool consecutive = false; 
        
        for (int i = 0; i < nums.size(); i++){
            if (consecutive){
                i = i - 1;
                consecutive = false; 
            }
            if (nums.at(i) == val){
                ++k;
                for (int j = i; j < nums.size() - 1; j++){
                    if (nums.at(j+1) == val){
                        consecutive = true; 
                    }
                    nums.at(j) = nums.at(j+1);
                }
                nums.at(nums.size() - 1) = 666; 
            }
        }
        
        k = nums.size() - k;
        return k;
    }
};
