from typing import List


class Solution:
    def helper(self, a, b):
        # print(a, b)
        a = list(str(a))
        b = list(str(b))
        a.sort()
        b.sort()
        return a[len(a) - 1] == b[len(b) - 1]

    def maxSum(self, nums: List[int]) -> int:
        ans = -1
        for i in range(len(nums)):
            for j in range(i, len(nums)):
                # print(ans)
                if i != j and self.helper(nums[i], nums[j]):
                    ans = max(ans, nums[i] + nums[j])

        return ans
