class Solution {
public:
    int lengthOfLastWord(string s) {
        string last = "";
        
        if (s.empty()){
            return 0;
        }
        
        char back = s.back();
        
        while (back == ' '){
            s.pop_back();
            back = s.back();
        }
        
        back = s.back();
        
        while (back != ' '){
            last = last + s.back();
            s.pop_back();
            if (s.size() > 0){
                back = s.back();
            }
            else{
                back = ' ';
            }
        }
        
        return last.size();
    }
};
