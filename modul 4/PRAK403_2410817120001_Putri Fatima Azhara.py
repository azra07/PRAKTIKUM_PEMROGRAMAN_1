x, y = map(int, input().split())

if x > y:
    z = x - y
    for i in range(z + 1):
        print(f"{x - i} {y + i}", end=" - " if i < z else "\n")
elif x < y:
    z = y - x
    for i in range(z + 1):
        print(f"{x + i} {y - i}", end=" - " if i < z else "\n")
else:
    print(x, y)