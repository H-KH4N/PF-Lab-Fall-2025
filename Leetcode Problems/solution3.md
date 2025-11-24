345. Reverse Vowels of a String
char* reverseVowels(char* s) {
    int length = strlen(s);     
    char arr[length]; 
    int count = 0;
    for(int x = 0; x < length; x++){
        if(s[x] == 'a' || s[x] == 'A' || s[x] == 'e' || s[x] == 'E' || s[x] == 'i' || s[x] == 'I' || s[x] == 'o' || 
        s[x] == 'O' || s[x] == 'u' || s[x] == 'U'){
            arr[count] = s[x]; 
            count += 1;
        }
    }
    for(int x = 0; x < length; x++){
        if(s[x] == 'a' || s[x] == 'A' || s[x] == 'e' || s[x] == 'E' || s[x] == 'i' || s[x] == 'I' || s[x] == 'o' || 
        s[x] == 'O' || s[x] == 'u' || s[x] == 'U'){
            s[x] = arr[count - 1];
            count -= 1;
        }
    }
    return s;
}

2108. Find First Palindromic String in the Array
bool isPal(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true;
}
char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        if (isPal(words[i])) {
            return words[i]; 
        }
    }
    
    return "";
}

48. Rotate Image
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        int left = 0;
        int right = n - 1;       
        while (left < right) {
            int temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;           
            left++;
            right--;
        }
    }
}
