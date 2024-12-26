while True:
    print("""
Pilih program
1. Penjumlahan
2. Pengurangan
3. Perkalian
4. Pembagian
5. Exit
""")

    try:
        user = int(input("Masukkan Pilihan: "))

        if user == 1:
            nilai_pertama = float(input("Masukkan nilai pertama: ")) 
            nilai_kedua = float(input("Masukkan nilai kedua: "))  
            hasil = nilai_pertama + nilai_kedua
            print(f"Hasil Penjumlahan antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
        elif user == 2:
            nilai_pertama = float(input("Masukkan nilai pertama: "))  
            nilai_kedua = float(input("Masukkan nilai kedua: "))  
            hasil = nilai_pertama - nilai_kedua
            print(f"Hasil Pengurangan antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
        elif user == 3:
            nilai_pertama = float(input("Masukkan nilai pertama: "))  
            nilai_kedua = float(input("Masukkan nilai kedua: "))  
            hasil = nilai_pertama * nilai_kedua
            print(f"Hasil Perkalian antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
        elif user == 4:
            nilai_pertama = float(input("Masukkan nilai pertama: "))  
            nilai_kedua = float(input("Masukkan nilai kedua: "))  
            hasil = nilai_pertama / nilai_kedua
            print(f"Hasil Pembagian antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
        elif user == 5:
            print("Terimakasih, telah menggunakan kalkulator Putri Fatima Az'hara")
            break
        else:
            print("Input anda salah, silahkan coba lagi")

    except ValueError:
        print("Input tidak valid, silakan masukkan angka yang sesuai.\n")