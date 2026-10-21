class Solution {
public:
    void sortColors(vector<int>& arr) {
        // int n = arr.size();
        // int low =0;
        // int mid = 0;
        // int high = n-1;

        // while(low <= high){
        //     if(arr[low] == 0){
        //         swap(arr[low], arr[mid]);
        //         low++;
        //         mid++;
        //     }
        //     else if(arr[low] == 1){
        //         low++;
        //     }else{
        //         swap(arr[low], arr[high]);
        //         high--;
        //     }
        // }  

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 0) count0++;
            else if(arr[i] == 1) count1++;
            else count2++;
        }
            int i = 0;
            for(int j =0 ; j < count0; j++){
                arr[i++] = 0;
            
            }
            for(int j = 0 ; j < count1; j++){
                arr[i++] = 1;
            }
            for(int j =0; j < count2; j++){
                arr[i++] = 2;
            }
    }
};