class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<4&&n!=2&&n!=1)
            return false;
        while(n!=1){
            if(n%2!=0)
                return false;
            n=n/2;
        }
            return true; 
    }
};