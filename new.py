def solve():
    n,k = map(int , input().strip().split())
    a = list(map(int, input().strip().split()))
    a=sorted(a)
    for i in range(min(n,k)):
        if a[i]>=0:
            break
        else:
            a[i]=-a[i]
        k-=1
    a=sorted(a)
    if k%2:
        a[0]=-a[0]
    print(sum(a))



for _ in range(int(input())):
    solve()