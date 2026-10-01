int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *ans = malloc((digitsSize + 1) * sizeof(int));

    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }

        digits[i] = 0;
    }

   
    ans[0] = 1;

    for (int i = 1; i <= digitsSize; i++) {
        ans[i] = 0;
    }

    *returnSize = digitsSize + 1;
    return ans;
}
