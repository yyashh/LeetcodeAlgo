class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string a=s;
        for(int i=0;i<indices.size();i++){
            a[indices[i]]=s[i];
        }
        return a;
    }
};