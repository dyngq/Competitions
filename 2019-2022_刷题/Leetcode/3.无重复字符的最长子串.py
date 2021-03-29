#
# @lc app=leetcode.cn id=3 lang=python3
#
# [3] 无重复字符的最长子串
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
# @lc code=end

# import requests
# url = "http://wttkzk.ytswcm.cn/Wxhd/GiftVote/vote/user_id/21/id/4230/iid/372563.so"
# headers = {"Host":"wttkzk.ytswcm.cn",
#         "Connection":"keep-alive",
#         "Content-Length":"22",
#         "Accept":"application/json, text/javascript, */*; q=0.01",
#         "Origin":"http://wttkzk.ytswcm.cn",
#         "X-Requested-With":"XMLHttpRequest",
#         "User-Agent":"Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.116 Safari/537.36 QBCore/4.0.1301.400 QQBrowser/9.0.2524.400 Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2875.116 Safari/537.36 NetType/WIFI MicroMessenger/7.0.5 WindowsWechat",
#         "Content-Type":"application/x-www-form-urlencoded; charset=UTF-8",
#         # "Referer":"http://wttkzk.ytswcm.cn/show_xs/21/4230/372563.so?key=2icjXgqSDd",
#         "Accept-Encoding":"gzip, deflate",
#         "Accept-Language":"zh-CN,zh;q=0.8,en-US;q=0.6,en;q=0.5;q=0.4",
#         "Cookie":"PHPSESSID=fd9vdptm9k34m9pemk1edv2b36"
#         }
# data = {"latitude":"0",
#         "longitude":"0"}
# res = requests.post(url=url,data=data,headers = headers)
# print(res.text)

# import requests
# url = "https://open.weixin.qq.com/connect/oauth2/authorize?appid=wxba12313ca8e7a&redirect_uri=http%3A%2F%2Fhnttzsyxgs.cn%2FWxhd%2FGiftVote%2Fdetail%2Fuser_id%2F21%2Fid%2F4230%2Fiid%2F372515%2Fkey%2F2icjXgqSDd.so&response_type=code&scope=snsapi_base&state=STATE&connect_redirect=1#wechat_redirect"
# headers = {
#     "Host":"wttkzk.ytswcm.cn",
#     "Connection":"keep-alive",
#     "Upgrade-Insecure-Requests":"1",
#     "Accept":"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8",
#     "User-Agent":"Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.116 Safari/537.36 QBCore/4.0.1301.400 QQBrowser/9.0.2524.400 Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2875.116 Safari/537.36 NetType/WIFI MicroMessenger/7.0.5 WindowsWechat",
#     "Referer":"http://wttkzk.ytswcm.cn/show_xs/21/4230/372515.so?key=2icjXgqSDd",
#     "Accept-Encoding":"gzip, deflate",
#     "Accept-Language":"zh-CN,zh;q=0.8,en-US;q=0.6,en;q=0.5;q=0.4",
#     # "Cookie":"PHPSESSID=jp4btc92roi3l6v2695912bc30"
#     # "Cookie":"PHPSESSID=fd9vdptm9k34m9pemk1edv2b36"
#     }
# res = requests.get(url=url, headers = headers)
# print(res.text)