class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        long long sum=0,maxi=LONG_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            maxi=max(sum,maxi);
            
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};