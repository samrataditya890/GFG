class Solution {
  public:
  void rclock(string& clockw){
      int index=clockw.size()-1;
      char c=clockw[index];
      while(index>=0){
          clockw[index]=clockw[index-1];
          index--;
      }
      clockw[0]=c;
  }

  void ranti(string& anticlock){
      int index=0;
      char c=anticlock[0];
      while(index<anticlock.size()){
          anticlock[index]=anticlock[index+1];
          index++;
      }
      anticlock[anticlock.size()-1]=c;
  }
    bool isRotated(string& s1, string& s2) {
        // code here
        string clockw=s1;
        string anticlock=s1;
        rclock(clockw);
        rclock(clockw);
        if(clockw==s2){
            return true;
        }
        ranti(anticlock);
        ranti(anticlock);
        if(anticlock==s2){
            return true;
        }

        return false;
    }
};
