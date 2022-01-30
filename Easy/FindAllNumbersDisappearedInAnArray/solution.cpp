class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> freqVec(size+1, 0);
        vector<int> missing{}; 
        
        for(auto num: nums){
            freqVec.at(num)++;
        }
        
        for(int i = 1; i <= size; i++){
            if(!freqVec.at(i)){
                missing.push_back(i);
            }
        }
        
        return missing;
    }
};









/* FIRST (WRONG) SOLUTION

//Traverse original vector and remove those elements from missing vector
        int remove = 0;
        for (int i = 0; i < nums.size(); i++){
            remove = nums.at(i);
            for (int j = 0; j < missing.size(); j++){
                if (missing.at(j) == remove){
                    missing.erase(missing.begin() + j);
                }
            }
        }
        
        return missing;
        
        
        
        
SECOND SOLUTION
//Define and populate proper vector
        vector<int> missing(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++){
            missing.at(i) = i + 1;
        }
        
        //
        bool end = false;
        int remove = 1;
        for (signed int j = 0; j < nums.size(); j++){
            if (nums.at(j) == remove){
                missing.erase(missing.begin() + (remove - 1));
                remove = remove + 1;
                j = -1;
            }
            
            if(j == nums.size() - 1) {
                remove = remove + 1;
                j = -1;
            }
            
            if (remove == nums.size() + 1){
                end = true;
            }
            
            if (end){
                j = nums.size();
            }
        }
        
        return missing; 
*/


