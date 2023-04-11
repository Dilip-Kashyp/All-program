def maxprofit( prices ):
    min_price = [0]
    max_profit = 0
    for i in range(len(prices)):
        min_price = min(min_price,prices[i])
        profit = prices[i]-min_price
        max_profit = max(max_profit,profit)
        return max_profit
    







prices = [7,1,6,4,3,]
print(maxprofit(prices))