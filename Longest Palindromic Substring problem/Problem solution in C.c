// Problem solution in C.
char * longestPalindrome(char * s)
{
    int high = 0;
    int low  = 0;
    int max_len = 0;
    char * start_ptr = NULL;
    
    int len = strlen(s);
    int i=0;
    
    
    if(len > 1)
    {
        for(i=1; i<len; i++)
        {
            high = i;
            low = i-1;
        
            while((low>=0 && high<len) && (s[low] == s[high]))
            {
                if(high-low+1 > max_len)
                {
                    max_len = high - low + 1;
                    start_ptr = (s + low);
                }
                high++;
                low--;
            }
            high = i+1;
            low = i-1;
        
            while((low>=0 && high<len) && (s[low] == s[high]))
            {
                if(high-low+1 > max_len)
                {
                    max_len = high - low + 1;
                    start_ptr = (s + low);
                }
                high++;
                low--;
            }       
        }
    }
    
    else if(len == 1) 
    {
        max_len = 1;
        start_ptr = s;
    }
    
    char * ret = NULL;
    if(max_len > 0)
    {
        ret = (char *)malloc(sizeof(char)*(max_len + 1));
        memcpy(ret, start_ptr, max_len);
        ret[max_len] = '\0';
    }
    
    else if(max_len == 0)
    {
        ret = (char *)malloc(sizeof(char)*(max_len + 2));
        ret[0] = s[0];
        ret[1] = '\0';
    }
    

    return ret;
}