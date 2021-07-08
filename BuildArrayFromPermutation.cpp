class Solution {
public:
    vector<int> buildArray(vector<int>& n) {
        vector<int> a;
        for(int i=0;i<n.size();i++){
            a.push_back(n[n[i]]);
        }
        return a;
    }
};