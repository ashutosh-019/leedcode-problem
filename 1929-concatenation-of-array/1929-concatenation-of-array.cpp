class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> c=nums;
      c.insert(c.end(),nums.begin(),nums.end());
        
    return c;
    }
   
};