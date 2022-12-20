#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& price) {
        int maxPro = 0;
        int  minprice = INT_MAX;
        for(int i = 0; i < price.size(); i++){
            minprice = min(minprice,price[i]);
            maxPro  = max(maxPro,price[i] - minprice);
            
        }
        return maxPro;
        
    }
};