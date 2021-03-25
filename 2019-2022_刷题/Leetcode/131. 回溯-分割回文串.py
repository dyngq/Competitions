from typing import List
class Solution:
    def partition(self, s: str) -> List[List[str]]:
        def find(m, n):
            pass

test = "aab"
s = Solution()
print(s.partition(test))

# a a a b b b a
#  , , , , , ,
#    , , , , ,
#  , , , , , 

# print(list(bin(3)))
# print('{:08b}'.format(3))
# print(type('{:08b}'.format(3)))

# print(bin(3).zfill(5))

# n = len(test)
# res_list = []
# for i in range(2**(n-1)):
#     res_list.append(list(bin(i)[2:].zfill(n-1)))

# print(res_list)

# res_list = []
# for i in range(2**(n)):
#     res_list.append(list(bin(i)[2:].zfill(n)))

# print(res_list)