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
         stack<string>store;
         int i=0;
         int n=path.size();
         while(i<n){
              string str=getdir(path,i);
              if(str.size()==0 || str=="."){
                  //nothing
              }
              else if(str==".." && store.size()>0){
                  store.pop();   
              }
              
              else if(str==".." && store.size()==0){
                  //nothing
              }
              else{
                 store.push(str);
              }
              
              i++;
         }
        string ans="";
         while(!store.empty()){
           ans="/"+store.top()+ans;
           store.pop();
         }
         if(ans.size()==0){
           ans+="/";
         }
         cout<<ans;
         return ans;
    }
};