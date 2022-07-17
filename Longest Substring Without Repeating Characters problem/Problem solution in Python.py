#Problem solution in Python.
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        count = 0
        new_str = ""
        for i in range(len(s)):
            if s[i] not in new_str:
                new_str += s[i]
                
                # update the count
                count = max(count, len(new_str))
            else:
                # get the index where the character appears first time in the new string
                new_str_index = new_str.index(s[i])
                
                # append this character from original string
                new_str += s[i]
                
                #skip first identical character in the new string
                new_str = new_str[new_str_index+1:]
        return count