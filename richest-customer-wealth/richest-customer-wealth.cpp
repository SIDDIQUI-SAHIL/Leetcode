class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int max_so_far=0,max_here=0;
        for(int row=0;row<accounts.size();row++){
            for(int col=0;col<accounts[row].size();col++){
                max_here+=accounts[row][col];
            }
            if(max_here>max_so_far){
                max_so_far=max_here;
            }
            max_here=0;
        }
        return max_so_far;
    }
};