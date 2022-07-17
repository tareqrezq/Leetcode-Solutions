//Problem solution in Java.
public class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s.length() <= 1) return s.length();
        
        int max = 1;
        int ptr = 0;
        for (int i = 1; i< s.length(); i++) {
            // find the first occurence of the char after index ptr
            int index = s.indexOf(s.charAt(i), ptr); 
            if (index < i) { // it means that it is contained in s.substring(ptr, i)
                ptr = index + 1;
            }
            max = Math.max(max, i - ptr + 1);
        }
        
        return max;
    }
}