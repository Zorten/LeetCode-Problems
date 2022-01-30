class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        
        for (int i = s.size() - 1; i >= 0; i--){
            if (s.at(i) == 'I'){
                num += 1;
            }   
            else if (s.at(i) == 'V'){
                if (i == 0){
                    num += 5;
                }
                else if (s.at(i -1) == 'I'){
                    num += 4;
                    i--;
                }
                else{
                    num += 5;
                }
            }
            else if (s.at(i) == 'X'){
                if (i == 0){
                    num += 10;
                }
                else if (s.at(i-1) == 'I'){
                    num += 9;
                    i--;
                }
                else{
                    num += 10;
                }
            }
            else if (s.at(i) == 'L'){
                if (i == 0){
                    num += 50;
                }
                else if (s.at(i-1) == 'X'){
                    num += 40;
                    i--;
                }
                else{
                    num += 50;
                }
            }
            else if (s.at(i) == 'C'){
                if (i == 0){
                    num += 100;
                }
                else if (s.at(i-1) == 'X'){
                    num += 90;
                    i--;
                }
                else{
                    num += 100;
                }
            }
            else if (s.at(i) == 'D'){
                if (i == 0){
                    num += 500;
                }
                else if (s.at(i-1) == 'C'){
                    num += 400;
                    i--;
                }
                else{
                    num += 500;
                }
            }
            else if (s.at(i) == 'M'){
                if (i == 0){
                    num += 1000;
                }
                else if (s.at(i-1) == 'C'){
                    num += 900;
                    i--;
                }
                else{
                    num += 1000;
                }
            }
        }
        
        return num;
    }
};
