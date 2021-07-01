class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0,j=n,k=0;
        vector<int> result;
        while(k<n){
            result.push_back(nums[i]);
            result.push_back(nums[j]);
            i++;
            j++;
            k++;
        }
        return result;
    }
};