 int removeDuplicates(int* nums, int numsSize) {
    
   int length = numsSize;

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (nums[i] == nums[j]) {
                length--;

                // Shift elements to the left to remove the duplicate
                for (int k = j; k < length; k++) {
                    nums[k] = nums[k + 1];
                }

                // Decrement j to recheck the current index
                j--;
            }
        }
    }

    return length;
}

// efficient code

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int uniqueIndex = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;
            nums[uniqueIndex] = nums[i];
        }
    }

    // The length of the array without duplicates is (uniqueIndex + 1)
    return uniqueIndex + 1;
}
