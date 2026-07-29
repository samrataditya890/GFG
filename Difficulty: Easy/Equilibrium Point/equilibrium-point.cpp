class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> pre(n,0);
        vector<int> suf(n,0);

        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i-1];
        }

        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+arr[i+1];
        }

        for(int i=0;i<n;i++){
            if(pre[i]==suf[i]){
                return i;
            }
        }

        return -1;
    
    }
};