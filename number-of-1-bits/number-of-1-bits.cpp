class Solution {
public:
   int table[256];
    void initialize(){
        table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
    }
    int hammingWeight(uint32_t n) {
        initialize();
        int res=table[n & 0xff];
        n=n>>8;
        res=res+table[n & 0xff];
        n=n>>8;
        res=res+table[n & 0xff];
        n=n>>8;
        res=res+table[n & 0xff];
        return res;
    }
};