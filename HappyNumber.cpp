class Solution {
public:
    bool isHappy(int n) {
        while(n>9){
            int c=n,sum=0;
            while(c!=0){
            sum+=pow(c%10,2);
            c=c/10;
            }
            n=sum;
        }
        if(n==1||n==7)
            return true;
        else
            return false;
    }
};