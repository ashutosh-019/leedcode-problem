class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stg;
        for (int i=0; i<s.length(); i++){
            if (stg.empty() || s[i]!=stg.top()){
                stg.push(s[i]);
            }
            else
            stg.pop();
        }
        string ans="";
        while(!stg.empty()){
            ans+=stg.top();
            stg.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};