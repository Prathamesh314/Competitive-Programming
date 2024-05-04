from typing import List


class Solution:
    def maximumCostSubstring(self, s: str, chars: str, vals: List[int]) -> int:
        dictionary = {chr(i): i - 96 for i in range(97, 123)}
        for i, c in enumerate(chars):
            dictionary[c] = vals[i]
        ans, temp = 0, 0
        for c in s:
            current = dictionary[c]
            if (temp + current) < 0:
                temp = 0
            else:
                temp += current
            ans = max(ans, temp)
        return ans
