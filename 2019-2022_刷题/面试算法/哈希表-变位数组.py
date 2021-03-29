from typing import List
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ha = dict()
        for i,astr in enumerate(strs):
            temp = list(astr)
            temp.sort()
            temp = ''.join(temp)
            # print(i,astr,temp)
            if temp not in ha.keys():
                ha[temp] = [astr]
            else:
                # print(ha[temp])
                ha[temp].append(astr)
        res = []
        for k in ha.values():
            # print(k)
            res.append(k)
        return res

# class Solution:
#     def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
#         ha = dict()
#         for astr in strs:
#             temp = "".join(sorted(astr))
#             ha[temp] = ha.get(temp,[]) + [astr]
#         return [vals for vals in ha.values()]

test = ["eat", "tea", "tan", "ate", "nat", "bat"]
s = Solution()
print(s.groupAnagrams(test))
# for i,astr in enumerate(test):
#     temp = list(astr)
#     temp.sort()
#     temp = ''.join(temp)
#     print(i,astr,temp)
a = ["ss","aa"]
b = ["pp","aa"]
print(a+b)