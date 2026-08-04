class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
      int mini = nums[0];
      int maxi = nums[0];
      for(int i =1; i<nums.size(); i++){
        if(nums[i] < mini){
            mini = nums[i];
        }
        if(maxi < nums[i]){
            maxi = nums[i];
        }
      }
      unordered_set<int> s(nums.begin(), nums.end());
      vector<int> result;
      for(int i = mini; i<maxi; i++){
        if(s.find(i) == s.end()){
            result.push_back(i);
        }

      }
      return result;
    }
};