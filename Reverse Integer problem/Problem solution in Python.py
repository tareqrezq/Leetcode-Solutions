#Problem solution in Python.
def reverse(x):
    sign = -1 if x<0 else 1
    res, x = 0, abs(x)
    while x:
        res = res*10 + (x%10)
        x /= 10
    # handle the overflow bound
    if res > 2**31+1 or res < -2**31-1:
        return 0
    return res*sign