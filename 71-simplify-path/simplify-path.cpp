class Solution {
public:
    string getdir(string path,int &i){
           string ans="";
           while(i<path.size() && path[i]!='/'){
                 ans+=path[i];
                 i++;
           }
        
           return ans;

    }
    string simplifyPath(string path) {
         vector<string>store;
         int i=0;
         int n=path.size();
         while(i<n){
              string str=getdir(path,i);
              if(str.size()==0 || str=="."){
                  //nothing
              }
              else if(str==".." && store.size()>0){
                  store.pop_back();   
              }
              
              else if(str==".." && store.size()==0){
                  //nothing
              }
              else{
                 store.push_back(str);
              }
              
              i++;
         }
        string ans="";
        i=0;
         while(i<store.size()){
          //  ans="/"+store.top()+ans;
           ans+="/"+store[i];
           i++;
         }
         if(ans.size()==0){
           ans+="/";
         }
        
         return ans;
    }
};