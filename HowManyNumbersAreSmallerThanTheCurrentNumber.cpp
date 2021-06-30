class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> c;
        int f;
        for(int i=0;i<nums.size();i++){
            f=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i])
                    f++;
            }
            c.push_back(f);
        }
        return c;
    }
};