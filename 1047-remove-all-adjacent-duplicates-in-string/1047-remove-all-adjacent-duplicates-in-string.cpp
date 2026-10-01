class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        for(char c:s){  // s ko alag karta hai

          if (!result.empty() && result.back() == c){
            result.pop_back();

          }
          else{
            result.push_back(c);
          }
        }
        return result;
        
    }
};