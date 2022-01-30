class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue = 1;
        int sum = startValue;
        int i = 0;
        
        while (i < nums.size()){
            sum += nums.at(i);
            i++;
            if (sum < 1){
                startValue++;
                sum = startValue;
                i = 0;
            }
        }
        
        return startValue;
    }
};
