//Problem solution in Java.
int start = 0, sign = 1;
        long res = 0;
        while(start < s.length() && s.charAt(start) == ' ') {
            start++;
        }
        
        if(start < s.length() && s.charAt(start) == '+') {
            start++;
        } else if(start < s.length() && s.charAt(start) == '-') {
            sign = -1;
            start++;
        }
        
        while(start < s.length()) {
            if(!Character.isDigit(s.charAt(start))) break;
            res *= 10;
            res += s.charAt(start) - '0';
            if(res > Integer.MAX_VALUE) {
                if(sign == 1) return Integer.MAX_VALUE;
                return Integer.MIN_VALUE;
            }
            start++;
        }
        
        return (int) res * sign;