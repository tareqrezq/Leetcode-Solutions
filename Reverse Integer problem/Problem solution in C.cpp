// Problem solution in C.
int reverse(int x) {
 
    long reval = 0;
    for(;x;x/=10)
        reval = reval *10 + x%10;
    
    x = reval;
    if(reval != x) return 0;
    
    return reval;
}