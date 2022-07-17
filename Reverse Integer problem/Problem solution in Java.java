//Problem solution in Java.
public int reverse(int x) {
        boolean neg = false;
        if(x<0){
            neg = true;
            x = -x;
        }
        long ans = 0;
        int maxPow = (int)Math.log10(x);
        while(x>0){
            ans+= (x%10 * Math.pow(10,maxPow--));
            x=x/10;
        }
        if(ans > Integer.MAX_VALUE){
            return 0;
        }
        if(neg){
            return (int)(-ans);
        }else{
           return (int) ans;
        }
    }