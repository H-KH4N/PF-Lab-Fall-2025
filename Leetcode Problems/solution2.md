283. Move Zeroes
void moveZeroes(int* nums, int numsSize) {
    int arrsize = numsSize;
    for(int x = 0; x < arrsize;){
        int n = x;
        for(int i = x + 1; i < arrsize; i++){
            if(nums[n] == 0){
                int temp = nums[i];
                nums[i] = nums[n];
                nums[n] = temp;
                n +=1;
            }
            else{break;}
        }
        if(n != x){
            arrsize -= 1;
        }
        if(nums[x] != 0){
            x +=1;
        }
        if(n == x){x +=1;}
    }  
} 

344. Reverse String
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while(left < right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        right--;
        left++;
    }
}

26. Remove Duplicates from Sorted Array
int removeDuplicates(int* nums, int numsSize) {
    int k = 1;
    if(numsSize == 0){return 0;}
    for(int x = 1; x < numsSize; x++){
        if(nums[x] != nums[x - 1]){
            nums[k] = nums[x];
            k++;
        }  
    }
    return k;
}
