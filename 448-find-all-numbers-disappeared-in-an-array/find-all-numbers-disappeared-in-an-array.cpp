class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();
        // int i = 0;

        // while (i < n) {
        //     int correctIdx = nums[i] - 1;

        //     if (nums[i] != nums[correctIdx])
        //         swap(nums[i], nums[correctIdx]);
        //     else
        //         i++;
        // }

        // vector<int> ans;
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] != i + 1) {
        //         ans.push_back(i + 1);
        //     }
        // }

        // return ans;

        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> ans;
        for(int i =1; i <= nums.size(); i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }

        }
        return ans;
    } 
};
