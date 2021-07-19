class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                c++;
            else
                nums[i-c]=nums[i];
        }
        int i=nums.size()-1;
        while(c--){
            nums[i]=0;
            i--;
        }
    }
};