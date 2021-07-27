class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()<3)
            return *max_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
         int max=nums[nums.size()-1],c=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(max!=nums[i]){
                max=nums[i];
                c++;
            }
            if(c==2)
                return max;
        }
         max=nums[nums.size()-1];
        return max;
    }
};