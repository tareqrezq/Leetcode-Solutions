//Problem solution in Java.
class Solution {
    public String convert(String s, int numRows) {
        if (s.length() == 0 || s.length() == 1 || numRows == 0 || numRows == 1)
            return s;
        int cols = (s.length()+numRows-1 -1)/(numRows - 1);
        
        String ans = "";
        int col = 0, row = 0;
        while (row < numRows){
            col = 0;
            while (col <= cols){
                if (col % 2 == 0){
                    if (col*(numRows - 1)+row < s.length())
                        ans += s.charAt(col*(numRows - 1)+row);
                }else{
                    if (col*(numRows - 1)+numRows - 1 - row < s.length())
                        ans += s.charAt(col*(numRows - 1)+numRows - 1 - row);
                }
                if (row == 0 || row == numRows -1)
                    col+=2;
                else col++;
            }
            row++;
        }
        return ans;
    }
}