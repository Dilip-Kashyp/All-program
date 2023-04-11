def maxProfit(  prices ):
        min_pri = 1
        max_pri = 0
    for i in prices :
        min_pri = min(min_pri,prices)
        max_pri = max(max_pri,prices-min_pri)
        return max_pri
        




 








    prices = [7,1,5,3,6,4]

