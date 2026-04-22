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
          vector<string>ans;
          
         for(int i=0;i<queries.size();i++){
            for(int j=0;j<dictionary.size();j++){
                       int n1=queries[i].length();
                       int n2=dictionary[j].length();
                       if(n1!=n2)continue;
                       if(isvalid(queries[i],dictionary[j])){
                        
                          ans.push_back(queries[i]);
                         
                          break;
                       }
            }

         }
        
         
         return ans;

    }
};