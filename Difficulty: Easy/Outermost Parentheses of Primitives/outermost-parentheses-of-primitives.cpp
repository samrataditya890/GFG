class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int level=0;
        string result;
        for(auto ch: s){
            if(ch=='('){
                if(level>0) {result+=ch;}
                level++;
            }
            else if(ch==')'){
                level--;
                if(level>0) { result+=ch;}
            }
        }
        return result;
    }
};