class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int  count[3] ={0};
        for(int i =0; i< n;i++){
            count[nums[i]]++;
        }
        for(int i=0; i<n;i++){
            if(i <count[0]){
                nums[i] =0;
            }
            else if(i<count[0]+count[1]){
                nums[i] =1;
            }
                else {nums[i]=2;}
            
        }
    }
};