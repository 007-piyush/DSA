
#include <stdbool.h> 
int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    *returnSize = 2;
    int* e = (int*)malloc(2*sizeof(int));

    for(int i=0; i<numsSize; i++)
        for(int j=i+1; j<numsSize; j++)
            if(nums[j] == target - nums[i])
            {
                printf("i = %d, j = %d\n", i, j);
                e[0] = i;
                e[1] = j;
                return e;                
            }
    // Return [-1,-1] if no result
    printf("No result with specified target\n");
    e[0] = -1;
    e[1] = -1;
    return e;
}