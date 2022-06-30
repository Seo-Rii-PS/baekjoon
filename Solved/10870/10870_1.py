def f(x):
    if x < 2: return 0
    if x == 2: return 1
    return f(x - 1) + f(x - 2)

print(f(int(input())+1))