n = int(input())
l = list(map(int, input().split()))

if 0 in l:
    print(0)
    exit()
else:
    ans = 1

for a in l:
    ans *= a
    if ans > pow(10, 18):
        print(-1)
        exit()

print(ans)
