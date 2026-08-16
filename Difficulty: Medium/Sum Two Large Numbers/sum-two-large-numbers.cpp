class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // code here
        int  index1=s1.size()-1, index2=s2.size()-1;
        string ans;
        int carry=0,sum;

        while(index2>=0 && index1>=0){
            sum=(s1[index1]-'0')+(s2[index2]-'0')+carry;
            carry=sum/10;
            char c='0'+sum%10;
            ans+=c;
            index1--,index2--;
        }
        if(index1>=0){
         while(index1>=0){
            sum=(s1[index1]-'0')+carry;
            carry=sum/10;
            char c='0'+sum%10;
            ans+=c;
            index1--;
        }
        }

        else if(index2>=0){
            while(index2>=0){
            sum=(s2[index2]-'0')+carry;
            carry=sum/10;
            char c='0'+sum%10;
            ans+=c;
            index2--;
        }
        }

        if(carry){
            ans+=char('0'+carry);
        }
        
    
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.size()-1 && ans[i]=='0'){
            i++;
        }
        if(i==ans.size()){
            return "0";
        }
        
        else return ans.substr(i);
    }
};