class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> res;
        int result=0;
        for(int a:nums){
            result+=res[a];
            res[a]++;
        }
        return result;
    }
};