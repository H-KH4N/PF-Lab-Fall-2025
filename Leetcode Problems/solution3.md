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

