class Solution {
public:
    int maxProductDifference(vector<int>& n) {
        int w=INT_MIN,x=INT_MIN,y=INT_MAX,z=INT_MAX;
        for(int i=0;i<n.size();i++){
            if(n[i]>w){
                x=w;
                w=n[i];
            }
            else if(x<n[i]){
                x=n[i];
            }
            if(n[i]<y){
                z=y;
                y=n[i];
            }
              else if(n[i]<z){
                z=n[i];
              }
             }
        int r=(w*x)-(y*z);
        return r;
    }
};