def reverse(reverse):
    n = 0
    while (reverse != 0):
        n = n * 10
        n = n + reverse % 10
        reverse //= 10
    return n

A, B = map(int,input().split())
A=reverse(A)
B=reverse(B)
C = A+B
print(reverse(C))