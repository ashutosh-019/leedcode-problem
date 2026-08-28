class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int freq[200]={0};
  
   for(char c:jewels){
    freq[c]=1;
   }
   int count=0;
   for (char c: stones){
    if (freq[c]==1){
        count++;
    }
   }
    
    return count;
    
      }
};