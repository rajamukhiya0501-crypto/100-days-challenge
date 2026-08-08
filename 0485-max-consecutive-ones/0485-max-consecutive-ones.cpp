class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int  curr = 0;
        int n = nums.size();
        int max =0;
        for(int i = 0; i<n; i++){
            
            if(nums[i] == 1){
                curr +=1;
            }
            else{
                 curr =0;
         } 
            if(curr > max){
                max= curr;
            }
         
        }
       return max; 
    }
};