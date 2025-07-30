#include <iostream>
#include <vector>
using namespace std;

class Solution { //brute
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int maxDiff = 0;
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                diff = prices[j] - prices[i];
                maxDiff= max(maxDiff, diff);
            }
           
        }
         return maxDiff;
    }
};