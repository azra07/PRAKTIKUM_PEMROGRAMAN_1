x, y = map(int, input().split())

for i in range(1, x + 1):
    hasil = 0
    while i > 1:
        print(f"({i}*{y}) + ", end="")
        hasil += i * y
        i -= 1
    print(f"({i}*{y})", end="")
    hasil += i * y
    print(f" = {hasil}")

A = 1
B = 1
C = 0
while A <= x:
    C += B * y
    B += A + 1
    A += 1
print(C)