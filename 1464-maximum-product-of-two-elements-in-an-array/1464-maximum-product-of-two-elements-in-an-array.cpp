class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int last= nums[nums.size()-1];
        int secondlast=nums[nums.size()-2];
       
       return (last-1) *(secondlast-1);
    }
};