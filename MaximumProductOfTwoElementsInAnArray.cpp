class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=INT_MIN,min=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                min=max;
                max=nums[i];
            }
                else if(nums[i]>min){
                    min=nums[i];
                }
        }
        return (max-1)*(min-1);
    }
};