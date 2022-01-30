class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm"; 
        int currSize = 0;
        int found1 = 0;
        int found2 = 0;
        int found3 = 0;
        int counter = 1;
        int j = 0;
        
        
        vector<string> answer;
        
                for (int i = 0; i < words.size(); i++){
            string currWord = words.at(i);
            for(int y = 0; y < currWord.size(); y++){
                currWord.at(y) = tolower(currWord.at(y));
            }
            currSize = currWord.size();
            
            found1 = row1.find_first_of(currWord.at(0));
            found2 = row2.find_first_of(currWord.at(0));
            found3 = row3.find_first_of(currWord.at(0));
            
            if (found1 != std::string::npos){
                counter = 1;
                j = 1;
                while(j < currSize){
                    found1 = row1.find_first_of(currWord.at(j));
                    if(found1 != std::string::npos){
                        counter++;
                    }
                    j++;
                }
                
            }
            else if(found2 != std::string::npos){
                counter = 1;
                j = 1;
                while(j < currSize){
                    found2 = row2.find_first_of(currWord.at(j));
                    if (found2 != std::string::npos){
                        counter++;
                    }
                    j++;
                } 
            }
            else{
                counter = 1;
                j = 1;
                while(j < currSize){
                    found3 = row3.find_first_of(currWord.at(j));
                    if (found3 != std::string::npos){
                        counter++;
                    }
                    j++;
                }
            }
            
            if (counter == currSize){
                answer.push_back(words.at(i));
            }
            counter = 0;    
        }
        
        return answer;
        
    }
};
