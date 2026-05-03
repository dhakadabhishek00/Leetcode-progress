class Solution {
public:
    bool rotateString(string s, string goal) {
          int n=s.length();
          while(n>0){
            n--;
               if(s==goal)return true;

               char ch=goal[0];
               goal=goal.substr(1);
               goal+=ch;
          }
          return false;
    }
};