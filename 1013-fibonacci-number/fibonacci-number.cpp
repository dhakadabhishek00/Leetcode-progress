class Solution {
public:
    int fib(int n) {
         int f=0;
         int sec=1;
         while(n>0){
             int s=f+sec;
             f=sec;
             sec=s;
             n--;
         }
         return f;
    }
};