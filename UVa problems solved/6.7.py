import sys
def maxProfit(stockPrices):
    """
    Input: Array of stock prices
    Output: Max profit that can be made by selling and buying at most twice
    """
    maxProfit1 = 0
    minPrice = sys.maxsize
    profits = [0]*len(stockPrices)

    for i in range(0, len(stockPrices)):
        maxProfit1 = max(maxProfit1, stockPrices[i]-minPrice)
        profits[i] = maxProfit1
        minPrice = min(minPrice, stockPrices[i])

    maxPrice = 0
    maxProfit2 =0
    for j in reversed(range(0, len(stockPrices))):
        
        
