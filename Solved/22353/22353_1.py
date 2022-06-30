a, b, c = input().split()
a, b, c = int(a), int(b), int(c)

cp = 1
wp = b
t = a
s = 0

while wp < 100:
    s += 1.0 * cp * t * wp / 100
    t += a
    cp *= (1.0 - wp / 100.0)
    wp *= 1 + c / 100

s += cp * t * 1.0

print(s)
