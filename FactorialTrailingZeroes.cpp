class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0,f=5;
        while(f<=n){
            sum+=n/f;
            f*=5;
        }
        return sum;
    }
};