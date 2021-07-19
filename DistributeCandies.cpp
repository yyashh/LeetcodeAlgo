class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int m,c=1;
        sort(candyType.begin(),candyType.end());
        m=candyType[0];
        for(int i=0;i<candyType.size();i++){
            if(m!=candyType[i]){
                c++;
                m=candyType[i];
            }
        }
        if(c<candyType.size()/2)
            return c;
            else
                return candyType.size()/2;
    }
};
