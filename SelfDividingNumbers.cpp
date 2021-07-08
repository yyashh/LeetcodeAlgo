class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> a;
        int c,re,f;
        for(int i=l;i<=r;i++){
            c=i;
            re=0;
            f=0;
            while(c!=0){
                re=c%10;
                c=c/10;
                if(re==0||i%re!=0){
                 f=1;
                    break;
                }
            }
            if(f==0)
                a.push_back(i);
        }
        return a;
    }
};