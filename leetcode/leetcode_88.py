class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        last = m + n - 1
        while m > 0 & n > 0:
            if nums1[m] > nums1[n]:
                nums1[last] = nums1[m]
                m -= 1
            else:
                nums1[last] = nums1[n]
                n -= 1
            last -= 1
        if n > 0:
            nums1[last] = nums2[n]
            last, n = last - 1, n - 1
