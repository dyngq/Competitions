from typing import List
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        n = 0
        for i in range(len(strs[0])):
            count = 0
            exit_flag = 0
            for j in range(1,len(strs)):
                if len(strs[j])>i:
                    # print(strs[j],i,j)
                    if strs[0][i] == strs[j][i]:
                        count += 1
                        # print(j,i,strs[0][i], strs[j][i],count)
                    else:
                        exit_flag = 1
                        break
                else:
                    exit_flag = 1
                    break
            if exit_flag == 1:
                break
            if count == len(strs)-1:
                n += 1

        return strs[0][:n]

test = ["cirra","cirar"]
test = ["flower","flow","flight"]
test = ["cir","car"]
s = Solution()
print(s.longestCommonPrefix(test))