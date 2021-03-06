#Problem solution in Python.
class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1 or numRows >= len(s):
            return s
        delta = -1
        row = 0
        res = [[] for i in range(numRows)]
        for c in s:
            res[row].append(c)
            if row == 0 or row == numRows - 1:
                delta *= -1
            row += delta
        for i in range(len(res)):
            res[i] = ''.join(res[i])
        return ''.join(res)