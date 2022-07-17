// Problem solution in C++.
class Solution {
public:
    int myAtoi(string str) {
        long long ans =0;
        bool isNeg = false;
        int i=0;
        while(str[i]==' ')
            i++;
        
        if(str[i]=='-'){
            isNeg = true;
            i++;
        }
            
        else if(str[i]=='+'){
            isNeg = false;
            i++;
        }
        while(str[i]=='0')
            i++;
        
        int end=0;
        for( end=i;end<str.size();end++){
             if(str[end]>'9'||str[end]<'0')
            break;
        }
        if(end-i>12){
            if(isNeg)
                return INT_MIN;
            else return INT_MAX;
        }
        for(int j=i;j<str.size();j++){
          if(str[j]>'9'||str[j]<'0')
            break;
            
            ans = 10*ans + str[j]-'0';
           
        }
         if(isNeg)
                return (INT_MIN>-ans?INT_MIN:-ans);
            else
                return (INT_MAX>ans?ans:INT_MAX);
       
    }
};