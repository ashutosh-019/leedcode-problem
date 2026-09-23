class Solution {
public:
    char findTheDifference(string s, string t) {
      int XOR=0;
       for (int i=0; i<s.size(); i++){
         XOR^=s[i];
        }
        for (int i=0; i<t.size(); i++){
            XOR^=t[i];
        }
        return XOR;
    }
};