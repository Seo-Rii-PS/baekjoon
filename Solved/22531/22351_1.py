s = input()

for i in range(1, 100):
    a = s[:]
    b = int(a[:i])
    t = b
    while a:
        c = str(b)
        if c != a[:len(c)]:
            break
        a = a[len(c):]
        b += 1
    if len(a) == 0:
        print(t, b - 1)
        exit(0)
