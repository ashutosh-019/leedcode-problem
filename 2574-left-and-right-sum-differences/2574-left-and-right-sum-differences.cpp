class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
       vector<int> leftsum(n,0);
       vector<int> rightsum(n,0);
       
       vector<int>ans(n);
       int prefix=0;
        for (int i=0; i<n; i++){
            prefix=prefix+nums[i];
            leftsum[i]=prefix;
        }
        int suffix=0;
        for (int i=n-1; i>=0; i--){
            suffix=suffix+nums[i];
            rightsum[i]=suffix;
        }
        for (int i=0; i<n; i++){
         ans[i]=abs(leftsum[i]-rightsum[i]);

        }
        return ans;
        
    }
};