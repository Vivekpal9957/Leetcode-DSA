class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
        sort(nums.begin(), nums.end());        
        int lar = 0;
        int seclar =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= lar){
                seclar = lar;
                lar = nums[i];
            }else if(nums[i] <= lar && nums[i]> seclar){
                seclar = nums[i];

            }

            
        }
       return (lar -1) * (seclar -1);
    }  
};