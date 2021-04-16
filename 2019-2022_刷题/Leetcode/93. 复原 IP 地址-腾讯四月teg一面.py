from typing import List

# class Solution:
#     def restoreIpAddresses(self, s: str) -> List[str]:
        
#         ips = [0] * 4
#         res = []
#         def back(ip_n, f):
            
#             if f == 4:
#                 if ip_n == len(s):
#                     resip = ".".join(str(seg) for seg in ips)
#                     res.append(resip)
#                 return
            
#             if ip_n == len(s): return
            
#             if s[ip_n] == "0":
#                 ips[f] = 0
#                 back(ip_n+1, f+1)

#             addr = 0
#             for i in range(ip_n, len(s)):
#                 addr = addr * 10 + ord(s[i]) - ord("0")
#                 # print(addr)
#                 if 0 < addr < 256:
#                     ips[f] = addr
#                     back(i+1, f+1)
#                 else:
#                     break
                
#         back(0, 0)
        
#         return res














class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        sn = [0] * 4
        def back(pos, seg):
            if seg == 4:
                print(sn)
                return 
            now = 0
            for i in range(pos, len(s)):
                now = now * 10 + (ord(s[i]) - ord("0"))
                # print(now)
                if 0 < now < 256:
                    # print(now)
                    sn[seg] = now
                    back(pos+1, seg+1)
                else:
                    break
        back(0, 0)



test = "25525511135"
# test = "01000"
s = Solution()
print(s.restoreIpAddresses(test))
















# class Solution:
#     def restoreIpAddresses(self, s: str) -> List[str]:
#         SEG_COUNT = 4
#         ans = list()
#         segments = [0] * SEG_COUNT
        
#         def dfs(segId: int, segStart: int):
#             # 如果找到了 4 段 IP 地址并且遍历完了字符串，那么就是一种答案
#             if segId == SEG_COUNT:
#                 if segStart == len(s):
#                     ipAddr = ".".join(str(seg) for seg in segments)
#                     ans.append(ipAddr)
#                 return
            
#             # 如果还没有找到 4 段 IP 地址就已经遍历完了字符串，那么提前回溯
#             if segStart == len(s):
#                 return

#             # 由于不能有前导零，如果当前数字为 0，那么这一段 IP 地址只能为 0
#             if s[segStart] == "0":
#                 segments[segId] = 0
#                 dfs(segId + 1, segStart + 1)
            
#             # 一般情况，枚举每一种可能性并递归
#             addr = 0
#             for segEnd in range(segStart, len(s)):
#                 addr = addr * 10 + (ord(s[segEnd]) - ord("0"))
#                 if 0 < addr <= 0xFF:
#                     segments[segId] = addr
#                     dfs(segId + 1, segEnd + 1)
#                 else:
#                     break
        

#         dfs(0, 0)
#         return ans

