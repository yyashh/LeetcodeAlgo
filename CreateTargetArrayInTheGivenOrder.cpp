class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> t;
        for(int i=0;i<nums.size();i++){
            t.insert(t.begin()+index[i],nums[i]);
            
        }
        return t;
    }
};