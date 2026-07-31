class Solution {
  public:

    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        
    
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};
