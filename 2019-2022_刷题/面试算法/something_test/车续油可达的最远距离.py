x = 10
acc = [0]*x
# print(acc)
t = 0

for i in range(x):
    # print(i)
    temp = (100 - t) / (x-i+1)

    acc[i] = temp

    t = t + temp

    print(temp)

print(sum(acc)) 

# a=10+1
# s=[0]*a
# to=0
# for i in range(1,len(s)):
#     s[i]=float((100-to)/(a))
#     to+=s[i]
#     a-=1
#     print(s[i])
# print(sum(s))