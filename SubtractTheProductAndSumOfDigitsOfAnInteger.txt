class Solution {
public:
    int subtractProductAndSum(int n) {
        int c=n,r=1,s=0;
        while(c!=0){
            r=r*(c%10);
            s+=c%10;
            c=c/10;
        }
        r=r-s;
        return r;
    }
};