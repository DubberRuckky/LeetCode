/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stddef.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *resultArr = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize; j++){
            if(i == j) {
                continue;
            }
            if(nums[i] + nums[j] == target){
                *returnSize = 2;
                resultArr[0] = i;
                resultArr[1] = j;
                return resultArr;
            }
        }
    }
*returnSize = 0;
free(resultArr);
return NULL;
}