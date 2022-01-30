class Solution {
public:
    
    long long nChoosek(int n, int k){
        int diff = n - k;
        
        long long kFact = 1;
        for (int i = k; i > 0; i--){
            kFact *= i;
        }
        
        long long nFact = 1;
        for (int i = n; i > diff; i--){
            nFact *= i;
        }
        
        return nFact/kFact;
        
    }
    
    int uniquePaths(int m, int n) {
        int stepsRight = n - 1;
        int stepsDown = m - 1;
        int stepsTotal = stepsRight + stepsDown;
        
        
    
        
        return nChoosek(stepsTotal, min(stepsDown, stepsRight));
        
        
    }
};
