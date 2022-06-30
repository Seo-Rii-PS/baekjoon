input()
c = input()
s = list(map(int, input().split()))
t = []
a = []
la = ''
for i in range(len(c)):
    if la and la != c[i]:
        a.append(max(t))
        t = []
    t.append(s[i])
    la = c[i]
a.append(max(t))
s = sorted(a[1:-1])
print(sum(s[len(s) // 2:]))
