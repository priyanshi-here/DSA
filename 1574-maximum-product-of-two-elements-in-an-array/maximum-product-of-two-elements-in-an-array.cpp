class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // return((nums[n-1]-1)*(nums[n-2]-1));
        int large = 0;
        int small = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>=large){
                small = large;
                large = nums[i];
            }
            else if(nums[i]>small){
                small = nums[i];
            }
            }
        
        
        return ((small-1)*(large-1));
    }
};