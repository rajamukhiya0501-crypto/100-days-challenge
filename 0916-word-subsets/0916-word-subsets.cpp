class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

vector<int> need(26,0);

for(string s : words2){
    vector<int> cnt(26,0);

for (char ch : s ) 
    cnt[ch-'a']++;

    for(int i =0; i<26; i++)
        need[i] = max(need[i], cnt[i]);
    }

 vector<string>ans;

for (string s : words1){
    vector<int> cnt(26,0);
    
    for(char ch : s){
        cnt[ch -'a']++;

    }
    bool ok = true;
    for (int i =0; i < 26; i++){
        if(cnt[i] < need[i]) {
            ok = false;
            break;
        }
    }
    if(ok) 
        ans.push_back(s);
    
}




return ans;


    }
};