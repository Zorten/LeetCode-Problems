class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_substr = 0;
        int start = 0;
        
        vector<char> alpha;
        vector<char> copy = alpha;
        
        if (s.size() == 0){
            return 0;
        }
        
        if(s.size() == 1){
            return 1;
        }
        
        for(int i = start; i < s.size(); i++){
            for (int j = 0; j < alpha.size(); j++){
                if (alpha.at(j) == s.at(i)){
                    alpha = copy;
                    start++;
                    i = start;
                }
            }
            alpha.push_back(s.at(i));  
            int size = alpha.size();
            max_substr = max(max_substr, size);
        }
        
        return max_substr; 
    }
};
