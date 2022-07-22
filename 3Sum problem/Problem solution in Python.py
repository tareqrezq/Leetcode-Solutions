#Problem solution in Python.
class Solution:

def threeSum(self, array: List[int]) -> List[List[int]]:
    if len(array) < 3:
        return []
    if (all(num == 0 for num in array)):
        return [[0, 0, 0]]
    size = len(array) 
    found = {}
    array = sorted(array)
    for index, value in enumerate(array):
        left = index + 1
        right = size - 1
        while left < right:
            total = value + array[left] + array[right]
            if total == 0:
                current = (value, array[left], array[right])
                if current not in found:
                    found[current] = True
                right = right - 1
            elif total < 0:
                left = left + 1
            else:
                right = right - 1
    return list(found.keys())