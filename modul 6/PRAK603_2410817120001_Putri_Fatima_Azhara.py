n1, n2 = map(int, input().split())
if (n1==n2):
    baris1 = list (map(int, input().split()))
    baris2 = list (map(int, input().split()))
    for i in range(n1):
        hasil = baris1[i] * baris2[i]
        print(hasil, end=" ")
else:
    print("Jumlah tidak sama")