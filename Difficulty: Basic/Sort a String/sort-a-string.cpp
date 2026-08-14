class Solution {
  public:
    string sortString(string &s) {
        // code here
         vector<int> alpha(26,0);
         for(int i=0;i<s.size();i++){
             alpha[s[i]-'a']++;
         }
         string ans;
         for(int i=0;i<26;i++){
             char c='a'+i;
             while(alpha[i]>0){
                 ans+=c;
                 alpha[i]--;
             }
         }
         return ans;
    }
};