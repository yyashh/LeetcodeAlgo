class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int c=0,s;
        for(int i=0;i<a.size();i++){
            s=0;
            for(int j=0;j<a[i].size();j++)
                s+=a[i][j];
            if(s>c)
                c=s;
        }
        return c;
    }
};
