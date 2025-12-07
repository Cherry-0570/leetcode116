int minStartValue(int* nums, int numsSize)  {
    int prefixSum = 0;
    int minPrefix = 0;

    for (int i = 0; i < numsSize; i++) {
        prefixSum += nums[i];
        if (prefixSum < minPrefix) {
            minPrefix = prefixSum;
        }
    }

    return 1 - minPrefix;
}


