class Solution {
public:
    string intToRoman(int num) {
        string roman = "";
        
        while ((num / 1000) >= 1){
            num -= 1000;
            roman.push_back('M');
        }
        
        if ((num / 900) >= 1){
            num -= 900;
            roman.push_back('C');
            roman.push_back('M');
        }
        
        while ((num / 500) >= 1){
            num -= 500;
            roman.push_back('D');
        }
        
        if ((num / 400) >= 1){
            num -= 400;
            roman.push_back('C');
            roman.push_back('D');
        }
        
        while ((num / 100) >=1){
            num -= 100;
            roman.push_back('C');
        }
        
        if ((num / 90) >= 1){
            num -= 90;
            roman.push_back('X');
            roman.push_back('C');
        } 
        
        while ((num / 50) >= 1){
            num -= 50;
            roman.push_back('L');
        }
        
        if ((num / 40) >= 1){
            num -= 40;
            roman.push_back('X');
            roman.push_back('L');
        }
        
        while ((num / 10) >= 1){
            num -= 10;
            roman.push_back('X');
        }
        
        if ((num / 9) >= 1){
            num -= 9;
            roman.push_back('I');
            roman.push_back('X');
        }
        
        while ((num / 5) >= 1){
            num -= 5;
            roman.push_back('V');
        }
        
        if ((num / 4) >= 1){
            num -= 4;
            roman.push_back('I');
            roman.push_back('V');
        }
        
        while ((num / 1) >= 1){
            num -= 1;
            roman.push_back('I');
        }
        
        return roman;
    }
};
