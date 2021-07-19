class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> a;
        int x=0;
        for(int i=0;i<n;i++){
            a.push_back(start+2*i);
            x^=start+2*i;
        }
        return x;
    }
};