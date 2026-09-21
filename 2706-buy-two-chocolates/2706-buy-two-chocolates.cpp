class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        for (int i=0; i<prices.size(); i++){
          sort(prices.begin(),prices.end());
          int x = prices[i]+prices[1];
          if (x<=money){
            return money-x;
          }
           
          
        }
        return money;
    }
};