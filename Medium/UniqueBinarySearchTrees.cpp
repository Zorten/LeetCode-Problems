class Solution {
public:
    
    long long n_choose_k(long long n, long long k){
        long long ans = 1;
        
        if (k > (n-k)){
            k = n - k;
        }
        
        for (int i = 0; i < k; i++){
            ans = ans * (n - i);
            ans = ans / (i + 1);
        }
        
        return ans;
    }
    
    int numTrees(int n) {
        long long p = n_choose_k(2*n, n);
        n = p / (n+1);
        return n;
    }
};
