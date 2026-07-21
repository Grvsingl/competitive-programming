class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max,count=0;
        for(int i=0; i<nums.size() ;i++){
            if (nums[i]!=1){
                max= max>count?max:count;
                count=0;
            } else {
                count++;
            }
        }
        return max>count?max:count;
    }
};