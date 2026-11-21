class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      
      int n = nums.size();
        vector<int> answer(n, 1);

        // Har index ke left ka product save karo
        int left = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = left;
            left *= nums[i];
        }

        // Right se aate hue product multiply karo
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= right;
            right *= nums[i];
        }

        return answer;  
    }
};