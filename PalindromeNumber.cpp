class Solution {
public:
    bool isPalindrome(int x) {
        int c=x;
        long long int r=0;
        while(c>0){
            r=(r*10)+c%10;
            c=c/10;
        }
        return r==x;
        }
};