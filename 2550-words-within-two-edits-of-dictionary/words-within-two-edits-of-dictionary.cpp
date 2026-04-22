class Solution {
public:
   bool isvalid(string w1,string w2){
         int n=w1.length();
         int c=0;
         for(int i=0;i<n;i++){
              if(w1[i]!=w2[i]){
                   c++;
              }
         }
        return c<=2;
   }
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
         map<string,int>mp;
         set<string>wrd;
          vector<string>ans;
         for(string word:queries){
            for(string word2:dictionary){
                       int n1=word.length();
                       int n2=word2.length();
                       if(n1!=n2)continue;
                       if(isvalid(word,word2)){
                        
                          ans.push_back(word);
                         
                          break;
                       }
            }

         }
        
         
         return ans;

    }
};