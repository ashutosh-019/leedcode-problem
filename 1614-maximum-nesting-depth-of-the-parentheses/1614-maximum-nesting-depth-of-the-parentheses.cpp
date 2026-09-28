class Solution {
public:
    int maxDepth(string s) {
        int y=0 ,z=0;
        for (auto x : s){
            if (x=='(')
            z++;
            if (x==')')
            z--;
            y=max(y,z);
        }
        return y;
    }
};