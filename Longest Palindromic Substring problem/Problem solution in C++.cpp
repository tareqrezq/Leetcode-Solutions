// Problem solution in C++.
class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        vector<vector<bool>> dp(n+1,vector<bool>(n+1,0));
        string str ="";
        
        for(int gap = 0 ; gap <=n ; gap++){
            for(int i = 0 , j = gap ; j<= n ; j++, i++){
                
                if(gap == 0)
                    dp[i][j] =true;   
                
                else if(gap ==1 && s[i] == s[j])
                    dp[i][j] = true;
                
                else if( s[i] == s[j] && dp[i + 1][j - 1])
                    dp[i][j] = true;
                
                else 
                    dp[i][j] = false;
                
                if(dp[i][j] && j - i + 1 > str.size())
                    str = s.substr(i, j - i + 1); 
                    
            }
        }
        return str;
    }
};