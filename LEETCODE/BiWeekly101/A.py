from typing import List


class Solution:
    def minNumber(self, nums1: List[int], nums2: List[int]) -> int:
        new_set = set(nums1) & set(nums2)
        ans = ""
        n1 = min(nums1)
        n2 = min(nums2)
        if n1 == n2:
            return n1
        elif n1 > n2:
            ans += str(n2) + str(n1)
        else:
            ans += str(n1) + str(n2)
        if len(new_set) != 0:
            new_min = min(new_set)
        if len(new_set) == 0:
            return int(ans)
        else:
            new_ans = min(new_set)
            ans = min(new_ans, int(ans))
            return ans
