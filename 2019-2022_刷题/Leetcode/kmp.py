class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        w = len(s1)
        flag = False
        left = 0
        right = w
        m = w
        while right < len(s2):
            print(left,right)
            count = 0
            for i, s in enumerate(s1):
                if s1[i] == s2[left+i]:
                    count += 1
                    m = i+1
                    # print(m)
                else:
                    left += m
                    right += m
                    break
            if count == w:
                flag = True
                break
            # print(k,s)

        return flag

s1 = "abc" 
s2 = "eiabdbaoabcoo"
s = Solution()
print(s.checkInclusion(s1,s2))