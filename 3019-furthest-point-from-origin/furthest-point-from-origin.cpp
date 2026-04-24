class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
           int l=0,r=0,u=0;
           for(char a:moves){
              if(a=='L'){
                  l++;
              }else if(a=='R'){
                  r++;
              }
              else{
                 u++;
              }
           }
           return u+abs(l-r);
    }
};