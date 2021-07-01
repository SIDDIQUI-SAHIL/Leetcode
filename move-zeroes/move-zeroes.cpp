class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(i==j){
                    j++;
                }
                else{
                    swap(nums[i],nums[j]);
                    j++;
                }
            }
        }
    }
};