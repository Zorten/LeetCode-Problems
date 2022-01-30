class Solution {
public:
    bool isValid(string s) {
        
        //if there's only one char, string is invalid
        if (s.size() == 1){
            return false;
        }
        
        //If the first character is a closing char, the string is invalid. 
        int i = 0;
        if (s.at(i) == ')' || s.at(i) == '}' || s.at(i) == ']'){
            return false;
        }
        
        //stack to hold valid entries
        stack<char> valid;
        
        //traverse the string
        while (i < s.size()){
            //if current index is opening parentheses, push to stack
            if (s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '['){
                valid.push(s.at(i));
            }
            
        
            //if the stack is empty AND curr index is closing parentheses return false
            cout << "size: " << valid.size() << endl;
            if ((valid.empty()) && (s.at(i) == ')' || s.at(i) == '}' || s.at(i) == ']')){
                return false;
            }
            
            
            //if curr indx is closing parentheses and the top of the stack is not the opening of such, return false
            if (s.at(i) == ')' || s.at(i) == '}' || s.at(i) == ']'){
                if (s.at(i) == ')' && valid.top() != '('){
                    return false;
                }
                
                if (s.at(i) == '}' && valid.top() != '{'){
                    return false;
                }
                
                if (s.at(i) == ']' && valid.top() != '['){
                    return false;
                }
                
                //pop from the stack. if there was an opening, we just checked for a corresponding closing, so it can be popped. if it was empty then it doesn't matter. 
                valid.pop();
            }
            
            //increase index
            i++;
        }
        
        
        //check stack, if it is empty that means string is valid
        if (valid.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }


};
