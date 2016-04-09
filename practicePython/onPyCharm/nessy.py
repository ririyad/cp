t = int(input())
while t:
    a, b = map(int, input().split(" "))
    print((a//3) * (b//3))
    t -=1