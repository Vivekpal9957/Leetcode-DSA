class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low =0;
        int mid = 0;
        int high = n-1;

        while(low <= high){
            if(arr[low] == 0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if(arr[low] == 1){
                low++;
            }else{
                swap(arr[low], arr[high]);
                high--;
            }
        }  
    }
};