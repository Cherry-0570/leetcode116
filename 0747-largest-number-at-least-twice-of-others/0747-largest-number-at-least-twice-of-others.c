int dominantIndex(int* nums, int numsSize) {
    if (numsSize == 0) return -1;

    int max = -1;
    int secondMax = -1;
    int index = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max) {
            secondMax = max;
            max = nums[i];
            index = i;
        } else if (nums[i] > secondMax) {
            secondMax = nums[i];
        }
    }

    return (max >= 2 * secondMax) ? index : -1;
}
