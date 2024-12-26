ruang = int(input())
isi = list(map(int, input().split()))

for i in range(ruang):
    hasil = isi[i]*(i+1)
    print(hasil, end=" ")