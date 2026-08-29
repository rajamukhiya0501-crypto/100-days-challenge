class Solution {
public:
    int dominantIndices(vector<int>& nums) {
       int n = nums.size();
        int ans = 0;
        long long sum = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            int count = n - i - 1;

            if ((long long)nums[i] * count > sum) {
                ans++;
            }

            sum += nums[i];
        }

        return ans;  
    }
};