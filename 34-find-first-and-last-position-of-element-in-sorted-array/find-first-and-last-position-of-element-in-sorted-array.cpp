class Solution {
public:

    int firstOccurrence(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;
        int result = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] < target) {
                low = mid + 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                result = mid;
                high = mid - 1;
            }
        }

        return result;
    }


    int lastOccurrence(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;
        int result = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] < target) {
                low = mid + 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                result = mid;
                low = mid + 1;
            }
        }

        return result;
    }


    vector<int> searchRange(vector<int>& nums, int target) {

       int first = firstOccurrence(nums, target);
       int last =  lastOccurrence(nums, target);

        return {first, last};
    }
};