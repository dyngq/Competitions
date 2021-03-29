from typing import List

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        ns = len(s)
        np = len(p)
        res = []
        if ns < np:
            return []
        cha1, cha2 = [0]*26, [0]*26
        for i in range(np):
            cha1[ord(s[i])-97] += 1
            cha2[ord(p[i])-97] += 1
        # if cha1 == cha2 and p[:np] != s[:np]:
        if cha1 == cha2:
            res.append(0)
        # print(cha1, cha2)
        for i in range(np,ns):
            cha1[ord(s[i])-97] += 1
            cha1[ord(s[i-np])-97] -= 1
            # if cha1 == cha2 and p[:np] != s[:np]:
            if cha1 == cha2:
                res.append(i-np+1)
        return res

# s = "cbaebabacd" 
# p = "abc"
s = "abab"
p = "ab"
ss = Solution()
print(ss.findAnagrams(s, p))