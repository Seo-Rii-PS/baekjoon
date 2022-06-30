import copy

a, b = input().split()
a, b = int(a), int(b)
src = []
for i in range(a):
    src.append(list(map(int, input().split())))
dest = []
for i in range(a):
    dest.append(list(map(int, input().split())))
done = []
for i in range(a):
    r = []
    for j in range(b):
        r.append(False)
    done.append(r)


def floyd(lst, x, y, c, d):
    if x < 0 or x >= a or y < 0 or y >= b or lst[x][y] != c:
        return
    lst[x][y] = d
    floyd(lst, x + 1, y, c, d)
    floyd(lst, x - 1, y, c, d)
    floyd(lst, x, y + 1, c, d)
    floyd(lst, x, y - 1, c, d)

fl=False
for k in range(a):
    for l in range(b):
        if src[k][l] != 0 and dest[k][l] != src[k][l]:
            fl = True
            break
if not fl:
    print('YES')
    exit()
for i in range(a):
    for j in range(b):
        if src[i][j] == dest[i][j]:
            continue
        ta = copy.deepcopy(src)
        floyd(ta, i, j, src[i][j], dest[i][j])
        fl = False
        for k in range(a):
            for l in range(b):
                if ta[k][l] != 0 and dest[k][l] != ta[k][l]:
                    fl = True
                    break
            if fl:
                break
        if not fl:
            print('YES')
            exit()
print('NO')
