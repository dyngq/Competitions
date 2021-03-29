from typing import List
class Solution:
    def minArray(self, numbers: List[int]) -> int:
        le = len(numbers)
        # arr = numbers
        res = [numbers[0]]
        def bifind(arr, l, r):
            

            a = l+int((r-l)/2)
            print(l, r, a)
            # print('ffres: ',arr[a],arr[a-1],res)
            if arr[a]<arr[a-1]:
                res[0] = arr[a]
                print('res: ',arr[a],arr[a-1],res)
                return
            if l >= r:
                print(l, r)
                if arr[l] < res[0]:
                    res[0] = arr[l]
                return
            # if arr[a] < arr[l]:
            #     bifind(arr, l, a)
            # # elif arr[a] = arr[l]:
            # #     if arr[l] < arr[r]
            # else:
            #     bifind(arr, a+1, r)
            if arr[l] > arr[r]:
                if arr[a] <= arr[r]: 
                    print('01')
                    bifind(arr, l, a)
                else:
                    print('02')
                    bifind(arr, a+1, r)
            elif arr[l] == arr[r]:
                if arr[a] == arr[r]: 
                    print('03')
                    bifind(arr, l, a)
                    bifind(arr, a+1, r)
                else:
                    print('04')
                    bifind(arr, l, a)
                    bifind(arr, a+1, r)
            else:
                if arr[a] >= arr[l]: 
                    print('05')
                    bifind(arr, l, a)
                else:
                    print('06')
                    bifind(arr, a+1, r)
            
        if le == 2:
            return numbers[0] if numbers[0] < numbers[1] else numbers[1]
        bifind(numbers, 0, len(numbers)-1)
        return res[0]

test1 = [2,2,2,0,1]
test2 = [3,3,1,3]
test3 = [4,5,6,7,0,1,2]
test4 = [2,2,2,0,2,2]
test5 = [2,0,0,0,1,2]
test6 = [2,0,1,1,1]
test7 = [2,2,2,0,0,1]
S = Solution()
print(S.minArray(test7))



# 4 0 1 2 3
# 1 2 3 4 0
# 3 4 5 1 2
# 7 8 3 4 5
# 5 6 3 4 1
# 5 6 3 1 4
