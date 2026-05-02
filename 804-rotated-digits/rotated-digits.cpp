class Solution {
public:
    int valid(int n){
         bool ans=false;
         while(n>0){
              int r=n%10;
              n/=10;
              if(r==3 || r==4 || r==7)return false;
              if(r==2 || r==5 || r==6 || r==9 )ans=true;

         }
         return ans;
    }
    int rotatedDigits(int n) {
          int ans=0;
          for(int i=1;i<=n;i++){
               if(valid(i)){
                 ans++;
               }
          }

        return ans;
    }
};