class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res = 0
        n = len(s)
        i = j = 0
        dicts = {}
        while i < n :
            if s[j] in dicts and dicts[s[j]] >= i:
                i = dicts[s[j]] + 1
                dicts[s[j]] = j
            else:
                dicts[s[j]] = j
                # j += 1
            # print(i,j,j-i+1)
            if j-i+1 > res:
                res = j-i+1
            if j < n-1:
                j += 1
            # print(dicts)
        return res

test = "abcabcbb"
test = "bbbbb"
test = "pwwkew"
s = Solution()
print(s.lengthOfLongestSubstring(test))

# print(set(test))