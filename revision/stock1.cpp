#include <bits/stdc++.h>
using namespace std;

 
int maxProfit(int idx, vector<int>& prices, bool canSell)
{
    
    if (idx == prices.size())
        return 0;
    if (canSell) {
        
        return max(prices[idx],
                   maxProfit(idx + 1, prices, canSell));
    }
    else {
        
        return max(-prices[idx]
                       + maxProfit(idx + 1, prices, true),
                   maxProfit(idx + 1, prices, canSell));
    }
}

int main()
{
    vector<int> prices{ 7, 1, 5, 3, 6, 4 };
    cout << maxProfit(0, prices, false) << "\n";
    return 0;
}