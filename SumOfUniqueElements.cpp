class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int a[101]={0},s=0;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        for(int i=0;i<=100;i++){
            if(a[i]==1)
                s=s+i;
        }
        return s;
    }
};