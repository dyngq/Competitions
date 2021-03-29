class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        w = len(s1)
        w2 = len(s2)
        if w > w2: return False
        flag = False
        left = w
        right = 2*w
        m = w
        cha1 = [0]*26
        cha2 = [0]*26
        for i in range(w):
            cha1[ord(s1[i])-97] += 1
            cha2[ord(s2[i])-97] += 1
        if cha1 == cha2:
            return True
        # while right < len(s2):
            # cha2[ord(s2[])-97] += 1
        # print(cha1,cha2)  
        for i in range(w,w2):
            cha2[ord(s2[i])-97] += 1
            cha2[ord(s2[i-w])-97] -= 1
            if cha1 == cha2:
                return True

        return flag

s1 = "abc" 
s2 = "eiabdbaoabcoo"
s = Solution()
print(s.checkInclusion(s1,s2))
print(ord("a"))

# 双指针这个方法是真的想不到，感觉条件都很巧
# 学习一下吧
# class Solution {
#     public boolean checkInclusion(String s1, String s2) {
#         int n = s1.length(), m = s2.length();
#         if (n > m) {
#             return false;
#         }
#         int[] cnt = new int[26];
#         for (int i = 0; i < n; ++i) {
#             --cnt[s1.charAt(i) - 'a'];
#         }
#         int left = 0;
#         for (int right = 0; right < m; ++right) {
#             int x = s2.charAt(right) - 'a';
#             ++cnt[x];
#             while (cnt[x] > 0) {
#                 --cnt[s2.charAt(left) - 'a'];
#                 ++left;
#             }
#             if (right - left + 1 == n) {
#                 return true;
#             }
#         }
#         return false;
#     }
# }

# 作者：LeetCode-Solution
# 链接：https://leetcode-cn.com/problems/permutation-in-string/solution/zi-fu-chuan-de-pai-lie-by-leetcode-solut-7k7u/
# 来源：力扣（LeetCode）
# 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。