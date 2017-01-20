import sys
def maxProfit(stockPrices):
    maxProfit = 0
    minPrice = sys.maxsize
    for price in stockPrices:
        maxProfit = max(price-minPrice, maxProfit)
        minPrice = min(price, minPrice)
    return maxProfit
    
print (maxProfit([310, 315, 275, 295, 260, 270, 290, 230, 255, 250]))
