class Solution {
public:
    
    bool isTarget(int num1, int num2, int target){
        if ((num1+num2) == target){
            return true;
        }
        else{
            return false; 
        }
    }
    
    vector<int> twoSum(vector<int>& nums, int target) { 
        vector<int> Solution;
        
        for (int i = 0; i < nums.size(); ++i){
            for (int j = i + 1; j < nums.size(); ++j){
                int num1 = nums.at(i);
                int num2 = nums.at(j);
                if(isTarget(num1, num2, target)){
                    Solution.push_back(i);
                    Solution.push_back(j);
                }
            }
        }
        
        return Solution;
    }  
};


