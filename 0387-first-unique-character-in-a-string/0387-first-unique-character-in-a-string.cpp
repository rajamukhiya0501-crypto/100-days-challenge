class Solution {
public:
    int firstUniqChar(string s) {
    queue<int>q; // index store karne ke liye
    int freq[26] ={0};

    for(char ch : s){
       freq[ch - 'a']++;
    }
 for(int i = 0; i < s.length(); i++) {
        q.push(i);
    }
    while(!q.empty()){
        int i =q.front();
        q.pop();
    
     if(freq[s[i] - 'a'] == 1) {
                return i;      // first unique index
            }
    }
 return -1;

    }
   
};