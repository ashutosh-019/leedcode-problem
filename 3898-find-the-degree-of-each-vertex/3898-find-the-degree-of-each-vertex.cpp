class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& nums) {
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                ans[i]+=nums[i][j];
            }
        }
        return ans;
    }
};