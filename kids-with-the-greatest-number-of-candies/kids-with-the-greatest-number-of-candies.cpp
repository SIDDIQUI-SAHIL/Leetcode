class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(),false);
        int max=INT_MIN;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max){
                result[i]=true;
            }
        }
        return result;
    }
};