# Inisialisasi harga sepatu
sepatu_a = 400000
sepatu_b = 350000

# Menghitung harga setelah diskon
# Diskon Sepatu A: 13% (sisa bayar = 87% atau 0.87)
# Diskon Sepatu B: 21% (sisa bayar = 79% atau 0.79)
akhir_a = int(sepatu_a - (sepatu_a * 13 / 100))
akhir_b = int(sepatu_b - (sepatu_b * 21 / 100))

# Menampilkan output
print(f"Harga sepatu A adalah {sepatu_a}")
print(f"Harga sepatu B adalah {sepatu_b}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {akhir_a}")
print(f"Sepatu A mendapat diskon 21% sehingga harganya menjadi {akhir_b}")