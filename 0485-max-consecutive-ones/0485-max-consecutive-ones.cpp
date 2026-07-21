class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=0,count=0;
        for(int i=0; i<nums.size() ;i++){
            if (nums[i]!=1){
                maxx= max(count,maxx);
                count=0;
            } else {
                count++;
            }
        }
        return max(maxx,count);
    }
};