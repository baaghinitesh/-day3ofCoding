// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val

int removeElement(int* nums, int numsSize, int val) {
    
    int length = numsSize;
    for(int i=0; i<length; i++)
    {
        if(nums[i]== val)
        {
            length--;
            for(int j=i; j<length; j++)
            {
                nums[j]=nums[j+1];
            }
            i--; // for recheq
        } 
    }
    return length;
}

// optimise code
int removeElement(int* nums, int numsSize, int val) {
    int i = 0; // Slow pointer

    for (int j = 0; j < numsSize; j++) {
        if (nums[j] != val) {
            // If the current element is not equal to the target value,
            // update nums[i] and move the slow pointer to the next position
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
}
