class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
      int  majority = 1;
       int leader = nums[0];
        for(int i =1; i<n;i++){
            if(majority ==0){
                leader = nums[i];
                majority =1;
            }
            else if(nums[i] == leader)
                {
                    majority ++;}
                    else {
                        majority --;
                    }
                }
              
            
        
        return leader;  
    }
};