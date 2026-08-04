class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int mini = nums[0];
        int maxi = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < mini) {
                mini = nums[i];
            }

            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }

        unordered_set<int> s(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = mini; i <= maxi; i++) {
            if (s.find(i) == s.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};