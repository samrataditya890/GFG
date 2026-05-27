class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maxione=0;
        int maxizero=0;
        int cntone=0;
        int cntzero=0;
        int maximum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                cntone++;
                maxione=max(maxione,cntone);
            }
            else{
                cntone=0;
            }
        }
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                cntzero++;
                maxizero=max(maxizero,cntzero);
            }
            else{
                cntzero=0;
            }
        }
        
        maximum=max(maxione,maxizero);
        
        return maximum;
        
    }
};