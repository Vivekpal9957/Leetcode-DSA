class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxsum = nums[0];

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];

            sum = max(sum, nums[i]);

            maxsum = max(maxsum, sum);
        }
        return maxsum;
        
    }
};