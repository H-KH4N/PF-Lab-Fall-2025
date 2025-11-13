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
