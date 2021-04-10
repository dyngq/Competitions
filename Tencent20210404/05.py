
times = int(input())
all_dict = {}
# res = [0.0] * times
# word = [''] * times
dics = []
for _ in range(times):
    dic = {}
    nums = int(input())
    for i in range(nums):
        temp = input()

        if temp in dic:
            dic[temp] = dic[temp] + 1
        else:
            dic[temp] = 1

        # if dic[temp] > res[_]:
        #     res[_] = float(dic[temp])
        #     word[_] = temp
    dics.append(dic)
    for k in dic:
        # print('k ',k, dic[k]) 

        if k in all_dict:
            all_dict[k] = all_dict[k] + 1
        else:
            all_dict[k] = 1
    
    # print(res)
    # print("{:.6}".format(res)) 
    # print('%.6f' % res)

for d in dics:
    res = 0.0
    for k in d:
        jud = d[k]/all_dict[k]
        # print(jud, k, d[k], all_dict[k])
        if jud > res:
            res = jud
    print('%.6f' % res)

# for i in range(times):
#     # print(res[i])
#     # print(word[i])
#     # print(all_dict[word[i]])
#     print('%.6f' % (res[i]/all_dict[word[i]]))

# print(dics)
# # print(word)
# print(all_dict)
# print(res)
