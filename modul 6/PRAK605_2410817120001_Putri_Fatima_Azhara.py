x = int(input(""))
MatriksA = []
MatriksB = []
MatriksAB = []

print("Matriks A")
for i in range(x):
    k = list(map(int, input("").split()))
    MatriksA.append(k)

print("Matriks B")
for i in range(x):
    k = list(map(int, input("").split()))
    MatriksB.append(k)

print("Matriks AXB")
for i in range(x):
    MatriksAB.append([])
    for j in range(x):
        Hasil = 0
        for k in range(x):
            Hasil += MatriksA[i][k] * MatriksB[k][j]
        MatriksAB[i].append(Hasil)

for number in MatriksAB:
    for k in number:
        print(k, end=" ")
    print()
