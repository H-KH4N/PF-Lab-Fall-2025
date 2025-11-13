1480. Running Sum of 1d Array
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    for (int x = 1; x < numsSize;x++){
        nums[x] += nums[x-1];
    }
    *returnSize = numsSize;
    return nums;
}

1470. Shuffle the Array
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int num[numsSize] = {};
    int j = 0;
    
    for(int x = 0; x < numsSize/2 ; x++){
        num[j] = nums[x];
        j += 1;
        num[j] = nums[n];
        j += 1;
        n++; 
    }
    *returnSize = numsSize;
    nums = num;
    return nums;
}
