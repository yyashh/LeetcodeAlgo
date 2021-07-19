class Solution {
public:
    int fib(int n) {
        int a=1,b=1,sum=0;
        if(n==1||n==2)
            return 1;
        for(int i=2;i<n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        return sum;
    }
};