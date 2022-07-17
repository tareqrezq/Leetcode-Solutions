//Problem solution in C.
char counts[256];

int lengthOfLongestSubstring(char* s) {
    unsigned char *f = (unsigned char *)s;
    unsigned char *p = (unsigned char *)s;
    unsigned char *next = f;
    int longest = 0;
    
    while (*f) {
        
        while ( ! counts [*p] ){
            counts[*p]++;
            p++;
        }
        
        if ( (p-f) > longest )
            longest = (p-f);
        
        counts[*f]--;
        f++;
    }
    return longest;
}