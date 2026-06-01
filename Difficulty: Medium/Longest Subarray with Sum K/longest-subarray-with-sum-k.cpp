class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<long long, int> firstIndex;
    
        long long prefixSum = 0;
        int maxLen = 0;

        for (int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i];

            if (prefixSum == k) {
                maxLen = max(maxLen,i+1);
            }
             int rem=prefixSum-k;
            
            
            if (firstIndex.find(rem) != firstIndex.end()) {
                maxLen = max(maxLen, i - firstIndex[rem]);
            }

            if (firstIndex.find(prefixSum) == firstIndex.end()) {
                firstIndex[prefixSum] = i;
            }
        }
        return maxLen;
    }
};