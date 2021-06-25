class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ex) {
        vector<bool> a;
        int i,h=0;
        for(i=0;i<c.size();i++){
            if(c[i]>h)
                h=c[i];
        }
         for(i=0;i<c.size();i++){
             if(c[i]+ex<h)
            a.push_back(false);
        else
            a.push_back(true);
        }
        return a;
    }
};