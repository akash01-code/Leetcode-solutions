void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int tmp = nums[insertPos];
            nums[insertPos] = nums[i];
            nums[i] = tmp;
            insertPos++;
        }
    }
}