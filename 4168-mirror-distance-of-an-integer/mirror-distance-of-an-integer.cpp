class Solution {
public:
    int mirrorDistance(int n) {
        int m=n;
        int q=0;
        while(m!=0){
            int r=m%10;
            q*=10;
            q+=r;
            m/=10;
        }
        return abs(n-q);
    }
};