class Solution {
public:
    int findNumbers(vector<int>& n) {
       int c,s=0;
        for(int i=0;i<n.size();i++){
        c=0;
            while(n[i]!=0){
            n[i]=n[i]/10;
            c++;
        }
        if(c%2==0)
            s++;
        }
        return s;
    }
};