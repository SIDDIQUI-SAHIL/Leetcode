class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        res.push_back(0);
        int temp;
        for(int i=1;i<n+1;i++){
            temp=(i&1)+res[i/2];
            res.push_back(temp);
        }
        return res;
    }
};