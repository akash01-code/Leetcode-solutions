int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;

    int minPrice = prices[0];
    int best = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] - minPrice > best) best = prices[i] - minPrice;
        if (prices[i] < minPrice) minPrice = prices[i];
    }
    return best;
}