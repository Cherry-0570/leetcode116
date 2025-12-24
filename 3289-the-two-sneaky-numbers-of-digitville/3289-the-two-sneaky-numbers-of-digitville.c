#include <stdlib.h>


int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int n = numsSize - 2;  
    int* count = (int*)calloc(n, sizeof(int)); 
    int* result = (int*)malloc(2 * sizeof(int));
    int idx = 0;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        count[num]++;
        if (count[num] == 2) {   
            result[idx++] = num;
            if (idx == 2) break;  
        }
    }

    free(count);
    *returnSize = 2;
    return result;
}
