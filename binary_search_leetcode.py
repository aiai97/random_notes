# Example 2: 74. Search a 2D Matrix

# Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. Integers in each row are sorted from left to right. The first integer of each row is greater than the last integer of the previous row.
class Solution:
    def searchMatrix(self,matrix:list[list[int]],target:int)->bool:
        # 行数m 列数n
        m,n = len(matrix),len(matrix[0])
        left,right = 0,m * n -1
        while left <= right:
            mid = (left + right) /2
            row = mid // n
            col = mid % n
            num = matrix[row][col]
            if num == target:
                return True
            if num < target:
                left = mid + 1
            else:
                right = mid - 1
        return False
# Example 3: 2300. Successful Pairs of Spells and Potions
#
# You are given two positive integer arrays spells and potions, where spells[i] represents the strength of the
# spell and potions[j] represents the strength of the potion. You are also given an integer success. A spell and potion pair is considered successful if the product of their strengths is at least success. For each spell, find how many potions it can pair with to be successful. Return an integer array where the
# element is the answer for the spell.
class Solution1:
    def successfulPairs(self,spells:list[int],potions:list[int],success:int)->list[int]:
        def binary_search(arr,target):
            left = 0
            right = len(arr) - 1
            while left <= right:
                mid = (left + right) // 2
                if arr[mid] < target:
                    left = mid + 1
                else:
                    right = mid - 1
            return left
        potions.sort()
        ans = []
        m = len(potions)
        for spell in spells:
            i = binary_search(potions,success / spell)
            ans.append(m - i)
        return ans
s = Solution1()
spells = [2, 3, 4]
potions = [1, 2, 3, 4, 5]
success = 6
result = s.successfulPairs(spells, potions, success)
print(result)  # 输出