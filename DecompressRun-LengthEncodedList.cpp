class Solution {
public:
   vector<int> decompressRLElist(vector<int>& nums) {
   vector<int> re;
       for(int i=0;i<nums.size();i=i+2)
           re.insert(re.end(),nums[i],nums[i+1]);
           return re;
    }
};