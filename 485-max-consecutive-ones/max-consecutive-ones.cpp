class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int prev = 0;
        for(int i = 0 ; i < nums.size(); i++){
           if(nums[i] == 1) {
            count++;
           }
           if (nums[i]==0){
            prev = max(count,prev);
            count = 0;
           }
        }


    return max(count,prev);

    }
};