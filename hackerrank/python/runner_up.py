n = int(input())
arr = list(map(int, input().split()))
maxNumeber = max(arr)
it = 0
while(it < n):
    if maxNumeber == max(arr):
        arr.remove(max(arr))
    it = it + 1

print(max(arr))
