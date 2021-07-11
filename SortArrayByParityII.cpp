class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> a,b;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<(a.size()+b.size())/2;i++){
            nums.push_back(a[i]);
             nums.push_back(b[i]);
        }
        return nums;
    }
};