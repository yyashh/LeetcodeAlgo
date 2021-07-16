class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int r=nums.size();
        for(int i=0;i<nums.size();i++){
            r+=i-nums[i];
        }
       
        return r;
    }
};