int sumOfSquares(int* nums, int numsSize) {
    int sum = 0;

    for (int i = 1; i <= numsSize; i++) {
        if (numsSize % i == 0) {
            int val = nums[i - 1];   
            sum += val * val;
        }
    }

    return sum;
}
